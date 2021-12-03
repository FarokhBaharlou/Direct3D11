
#include "App.h"

App::App() : wnd(800, 300, "D3D11 Stuff")
{
}

int App::Go()
{
	while (true)
	{
		if (const auto ecode = Window::ProcessMessage())
			return *ecode;
		DoFrame();
	}
}

void App::DoFrame()
{
}
