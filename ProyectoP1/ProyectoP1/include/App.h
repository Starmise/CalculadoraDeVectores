#pragma once
#include "Commons.h"

class App
{
public:
	App();
	~App();

	void adiVector();
	void subVector();
	void mulVector();
	void divVector();

	void menu();

	int opc;
	float resultX;
	float resultY;

private:

};

App::App()
{
}

App::~App()
{
}