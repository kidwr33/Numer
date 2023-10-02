#include "Numer.h"
class SandBox : public Numer::Application {
public:
	SandBox() {

	}

	~SandBox() {

	}
};

Numer::Application* Numer::CreateApplication() {
	return new SandBox();
}