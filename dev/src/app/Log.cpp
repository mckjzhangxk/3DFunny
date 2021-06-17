#include "Log.h"
namespace sugar {
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init() {
		spdlog::set_pattern("%^[%T] [%n] [%l] %v %$");
		
		
		s_CoreLogger = spdlog::stdout_color_mt("Engine");
		
		s_ClientLogger= spdlog::stdout_color_mt("App");

		s_CoreLogger->set_level(spdlog::level::trace);
		s_ClientLogger->set_level(spdlog::level::trace);
		
	}
}