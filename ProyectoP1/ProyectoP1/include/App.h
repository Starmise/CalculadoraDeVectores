#pragma once
#include "Commons.h"

class App
{
public:
	App();
	~App();

	void menu();

	void Vector2Options();
	void Vector3Options();
	void Vector4Options();
	
	void printVector2();
	void printVector3();
	void printVector4();

	int opc = 0;

private:

};