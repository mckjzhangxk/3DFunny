#pragma once
#include "core.h"
namespace sugar {

	class SGAPI Application
	{
	public:
		Application() {};

		virtual void run();
		virtual ~Application(){};
		

	};
	//�û��˶���
	Application* createApplication();
}
 

