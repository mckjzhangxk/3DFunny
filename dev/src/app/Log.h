#pragma once
#include "core.h"
#include<memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace  sugar {
	class SGAPI Log
	{
	public:
		static void Init();
		static inline std::shared_ptr<spdlog::logger> getCoreLogger() { return s_CoreLogger; };
		static inline std::shared_ptr<spdlog::logger> getClientLogger() { return s_ClientLogger; };

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define SG_CORE_INFO(...) ::sugar::Log::getCoreLogger()->info(__VA_ARGS__)
#define SG_CORE_WARN(...) ::sugar::Log::getCoreLogger()->warn(__VA_ARGS__)
#define SG_CORE_ERROR(...) ::sugar::Log::getCoreLogger()->error(__VA_ARGS__)


#define SG_INFO(...) ::sugar::Log::getClientLogger()->info(__VA_ARGS__)
#define SG_WARN(...) ::sugar::Log::getClientLogger()->warn(__VA_ARGS__)
#define SG_ERROR(...) ::sugar::Log::getClientLogger()->error(__VA_ARGS__)