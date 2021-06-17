#pragma once

#ifdef PLATFORM_WINDOWS

extern sugar::Application* sugar::createApplication();


int main(int argc,char* argv[]) {



	auto app = sugar::createApplication();
	app->run();
	delete app;
}

#endif // PLATFORM_WINDOWS
