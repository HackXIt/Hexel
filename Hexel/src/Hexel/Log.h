#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hexel
{
	class HEXEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define HX_CORE_TRACE(...)   ::Hexel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HX_CORE_INFO(...)    ::Hexel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HX_CORE_WARN(...)    ::Hexel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HX_CORE_ERROR(...)   ::Hexel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HX_CORE_FATAL(...)   ::Hexel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define HX_TRACE(...)   ::Hexel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HX_INFO(...)    ::Hexel::Log::GetClientLogger()->info(__VA_ARGS__)
#define HX_WARN(...)    ::Hexel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HX_ERROR(...)   ::Hexel::Log::GetClientLogger()->error(__VA_ARGS__)
#define HX_FATAL(...)   ::Hexel::Log::GetClientLogger()->fatal(__VA_ARGS__)