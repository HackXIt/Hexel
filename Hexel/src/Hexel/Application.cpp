#include "hxpch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Hexel
{
	Application::Application()
	{
		
	}

	Application::~Application()
	{
		
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			HX_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			HX_TRACE(e);
		}
		while (true);
	}
}