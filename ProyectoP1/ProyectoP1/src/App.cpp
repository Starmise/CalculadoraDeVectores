#include "Commons.h"
#include "App.h"
#include "Vector2.h"
#include "Vector3.h"

Vector2 vector2;
Vector3 vector3;

App::App()
{
}

App::~App()
{
}

void App::menu()
{
	cout << "Hola, ingrese una opción: " << endl;
	cout << "1. Producto punto" << endl;
	cout << "2. Producto cruz" << endl;
	cout << "3. Suma de vectores" << endl;
	cout << "4. Resta de vectores" << endl;
	cout << "5. Multiplicación de vectores" << endl;
	cout << "6. División de vectores" << endl;
	cin >> opc;

	while (opc != 0)
	{
		switch (opc)
		{
		case 1:
			//dotProduct();
			break;
		case 2:
			//crossProduct();
			break;
		case 3:
			adiVector();
			break;
		case 4:
			subVector();
			break;
		case 5:
			mulVector();
			break;
		case 6:
			divVector();
			break;
		default:
			cout << "Esa no es una opción valida" << endl;
			break;
		}
	}
}

void App::adiVector()
{
	resultX = vector2.x + vector3.x;
	resultY = vector2.y + vector3.y;
	cout << "El resultado de la suma es: (" << resultX << ", " << resultY << ")" << endl;
}

void App::subVector()
{
	resultX = vector2.x - vector3.x;
	resultY = vector2.y - vector3.y;
	cout << "El resultado de la resta es: (" << resultX << ", " << resultY << ")" << endl;
}

void App::mulVector()
{
	resultX = vector2.x * vector3.x;
	resultY = vector2.y * vector3.y;
	cout << "El resultado de la multiplicación es: (" << resultX << ", " << resultY << ")" << endl;
}

void App::divVector()
{
	resultX = vector2.x/vector3.x;
	resultY = vector2.y/vector3.y;
	cout << "El resultado de la división es: (" << resultX << ", " << resultY << ")" << endl;
}