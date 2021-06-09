#include "engine.h"

class SandBoxApp:public sugar::Application
{
public:
	SandBoxApp() {};
	~SandBoxApp() {};

private:

};

sugar::Application* sugar::createApplication() {
	return new SandBoxApp();
}

