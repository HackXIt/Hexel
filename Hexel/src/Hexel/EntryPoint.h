#pragma once

#ifdef HX_PLATFORM_WINDOWS

extern Hexel::Application* Hexel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hexel Engine\n");
	auto app = Hexel::CreateApplication();
	app->Run();
	delete app;
}

#endif