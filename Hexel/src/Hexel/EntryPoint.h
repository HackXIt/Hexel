#pragma once

#ifdef HX_PLATFORM_WINDOWS

extern Hexel::Application* Hexel::CreateApplication();

int main(int argc, char** argv)
{
	Hexel::Log::Init();
	HX_CORE_WARN("Initialized Log!");
	int a = 5;
	HX_INFO("Hello! Var={0}", a);
	auto app = Hexel::CreateApplication();
	app->Run();
	delete app;
}

#endif