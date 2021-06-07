#include "engine.h"

class SandBoxApp:public sugar::Application
{
public:
	SandBoxApp() {};
	~SandBoxApp() {};

private:

};


int main() {

	SandBoxApp* app = new SandBoxApp();
	app->run();
	delete app;
}