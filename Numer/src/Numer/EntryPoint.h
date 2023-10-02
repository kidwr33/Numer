#pragma once

#ifdef NM_PLATFORM_WINDOWS

extern Numer::Application* Numer::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = Numer::CreateApplication();
	app->Run();
	delete app;
}
#endif