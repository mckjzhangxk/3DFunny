workspace("3DFunny")
   architecture "x86_64"
   configurations { "Debug", "Release" ,"Dist"}

outputdir="%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "3DFunny"
   location "dev"
   kind "SharedLib"
   language "C++"
   targetdir ("bin/" .. outputdir "/%{prj.name}")
   objdir ("bin-int/" .. outputdir "/%{prj.name}")
  
   files { "dev/src/**.h", "dev/src/**.cpp" }

   includedirs {"dev/vendor/spdlog/include"}

   -- for windows only
   filter("system:windows")
      cppdialect "C++17"
      staticruntime "On"
      systemversion "lastest"

      defines {"FUNNY_DLL_BUILD"}

      --post build
      postbuildcommands {
         "copy %{cfg.buildtarget.relpath} ../bin/" ..outputdir .."SandBox"
      }
   filter("configurations:Debug")
      defines { "SG_DEBUG" }
      symbols "On"

   filter("configurations:Release")
      defines { "SG_RELEASE" }
      optimize "On"
   
   filter("configurations:Dist")
      defines { "SG_DIST" }
      optimize "On"

project "SandBox"
   location "SandBox"
   kind "ConsoleApp"

   language "C++"
   targetdir ("bin/" .. outputdir "/%{prj.name}")
   objdir ("bin-int/" .. outputdir "/%{prj.name}")
  
   files { "%{prj.name}/src/**.h", "%{prj.name}/src/**.cpp" }

   includedirs {
      "dev/vendor/spdlog/include",
      "dev/src"
   }

   links "3DFunny"

   filter("system:windows")
   cppdialect "C++17"
   staticruntime "On"
   systemversion "lastest"

   defines {"PLATFORM_WINDOWS"}

   
   filter("configurations:Debug")
      defines { "SG_DEBUG" }
      symbols "On"

   filter("configurations:Release")
      defines { "SG_RELEASE" }
      optimize "On"

   filter("configurations:Dist")
      defines { "SG_DIST" }
      optimize "On"