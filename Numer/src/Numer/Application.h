#pragma once

#include "Core.h"

namespace Numer {

	class NUMER_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();

}

