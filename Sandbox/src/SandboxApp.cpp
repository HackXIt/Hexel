#include <Hexel.h>

class Sandbox : public Hexel::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}
};

Hexel::Application* Hexel::CreateApplication()
{
	return new Sandbox();
}