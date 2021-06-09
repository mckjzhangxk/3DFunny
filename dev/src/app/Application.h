#pragma once
#include "core.h"
namespace sugar {

	class SGAPI Application
	{
	public:
		Application() {};

		void run();
		virtual ~Application(){};
		

	};
	//用户端定义
	Application* createApplication();
}
 

