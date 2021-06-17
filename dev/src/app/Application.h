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
	//用户端定义
	Application* createApplication();
}
 

