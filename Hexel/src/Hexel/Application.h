#pragma once

#include "Core.h"

namespace Hexel
{
	class HEXEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}

