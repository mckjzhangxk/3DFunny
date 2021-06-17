#include "engine.h"

class SandBoxApp:public sugar::Application
{
public:
	SandBoxApp() {};
	~SandBoxApp() {};
	void run() {
		using namespace sugar;
		Log::Init();

		SG_CORE_WARN("HELLO WORLD");
		SG_WARN("HELLO WORLD");

		SG_CORE_INFO("HELLO WORLD");
		SG_INFO("HELLO WORLD");

		SG_CORE_ERROR("HELLO WORLD");
		SG_ERROR("HELLO WORLD");

		while (1);
	};
private:

};

sugar::Application* sugar::createApplication() {
	return new SandBoxApp();
}

