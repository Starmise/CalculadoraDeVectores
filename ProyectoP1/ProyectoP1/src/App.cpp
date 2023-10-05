#include "Commons.h"
#include "App.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

Vector2 vector2, vector2nd;
Vector3 vector3, vector3rd;
Vector4 vector4, vector4th;
int opti;
float result;

App::App(): opc(0)
{
}

App::~App()
{
}

void App::menu()
{
	cout << "Hola, bienvenido a la calculadora de vectores, ";
	cout << "ingrese un opción para el vector que desea usar: " << endl;
	cout << "1. Vector2" << endl;
	cout << "2. Vector3" << endl;
	cout << "3. Vector4" << endl;
	cout << " " << endl;
	cin >> opc;

	while (opc != 0)
	{
		switch (opc)
		{
		case 1:
			Vector2Options();
			break;

		case 2:
			Vector3Options();
			break;
		case 3:
			Vector4Options();
			break;
		default:
			cout << "Esa no es una opción valdia" << endl;
			break;
		}
	}
}

void App::Vector2Options()
{
	cout << "Ingresa el valor de X del primer vector: " << endl;
	cin >> vector2.x;
	cout << "Ingresa el valor de Y del primer vector: " << endl;
	cin >> vector2.y;
	vector2.setVector2(vector2.x, vector2.y);

	cout << "Ingresa el valor de X del segundo vector: " << endl;
	cin >> vector2nd.x;
	cout << "Ingresa el valor de Y del segundo vector: " << endl;
	cin >> vector2nd.y;
	vector2nd.setVector2(vector2nd.x, vector2nd.y);

	do{
		cout << " " << endl;
		cout << "Elige alguna opción: " << endl;
		cout << "1. Sumar				2.Restar" << endl;
		cout << "3. Multiplicar				4.Dividir" << endl;
		cout << "5. Producto punto			6.Producto cruz" << endl;
		cout << "7. Calcular magnitud			8.Normalizar" << endl;
		cout << "0. Volver al menú principal" << endl;
		cin >> opti;

		switch (opti)
		{
		case 1:
			vector2.Addition(vector2nd);
			printVector2();
			break;

		case 2:
			vector2.Substraction(vector2nd);
			printVector2();
			break;

		case 3:
			vector2.Multiplication(vector2nd);
			printVector2();
			break;

		case 4:
			vector2.Division(vector2nd);
			printVector2();
			break;

		case 5:
			vector2.dotProduct(vector2nd);
			cout << "El resultado del vector es: " << vector2.resultx << endl;
			break;

		case 6:
			vector2.crossProduct(vector2nd);
			result = vector2.crossProduct(vector2nd);
			cout << "El resultado del producto cruz es: " << result << endl;
			break;

		case 7:
			vector2.Magnitude(vector2);
			cout << "La magnitud del vector es: " << vector2.resultx << endl;
			break;

		case 8:
			vector2.Normalize(vector2);
			cout << "Normalizar al vector da: " << vector2.resulty << endl;
			break;
		case 0:
			menu();
			break;

		default:
			cout << "Esa no es una opción valdia" << endl;
			break;
		}
	} while (opti != 0);
}

void App::Vector3Options()
{
	cout << "Ingresa el valor de X del primer vector: " << endl;
	cin >> vector3.x;
	cout << "Ingresa el valor de Y del primer vector: " << endl;
	cin >> vector3.y;
	cout << "Ingresa el valor de Z del primer vector: " << endl;
	cin >> vector3.z;
	vector3.setVector3(vector3.x, vector3.y, vector3.z);

	cout << "Ingresa el valor de X del segundo vector: " << endl;
	cin >> vector3rd.x;
	cout << "Ingresa el valor de Y del segundo vector: " << endl;
	cin >> vector3rd.y;
	cout << "Ingresa el valor de Z del segundo vector: " << endl;
	cin >> vector3rd.z;
	vector3rd.setVector3(vector3rd.x, vector3rd.y, vector3rd.z);

	do{
		cout << " " << endl;
		cout << "Elige alguna opción: " << endl;
		cout << "1. Sumar				2.Restar" << endl;
		cout << "3. Multiplicar				4.Dividir" << endl;
		cout << "5. Producto punto			6.Producto cruz" << endl;
		cout << "7. Calcular magnitud			8.Normalizar" << endl;
		cout << "0. Volver al menú principal" << endl;
		cin >> opti;

		switch (opti)
		{
		case 1:
			vector3.Addition(vector3rd);
			printVector3();
			break;

		case 2:
			vector3.Substraction(vector3rd);
			printVector3();
			break;

		case 3:
			vector3.Multiplication(vector3rd);
			printVector3();
			break;

		case 4:
			vector3.Division(vector3rd);
			printVector3();
			break;

		case 5:
			vector3.dotProduct(vector3rd);
			cout << "El resultado del vector es: " << vector3.resultx << endl;
			break;

		case 6:
			vector3.crossProduct(vector3rd);
			printVector3();
			break;

		case 7:
			vector3.Magnitude(vector3rd);
			cout << "La magnitud del vector es: " << vector3.resultx << endl;
			break;

		case 8:
			vector3.Normalize(vector3rd);
			cout << "Normalizar al vector da: " << vector3.resulty << endl;
			break;
		case 0:
			menu();
			break;

		default:
			cout << "Esa no es una opción valdia" << endl;
			break;
		}
	}while (opti != 0);
}

void App::Vector4Options()
{
	cout << "Ingresa el valor de X del primer vector: " << endl;
	cin >> vector4.x;
	cout << "Ingresa el valor de Y del primer vector: " << endl;
	cin >> vector4.y;
	cout << "Ingresa el valor de Z del primer vector: " << endl;
	cin >> vector4.z;
	cout << "Ingresa el valor de W del primer vector: " << endl;
	cin >> vector4.w;
	vector4.setVector4(vector4.x, vector4.y, vector4.z, vector4.w);

	cout << "Ingresa el valor de X del primer vector: " << endl;
	cin >> vector4th.x;
	cout << "Ingresa el valor de Y del primer vector: " << endl;
	cin >> vector4th.y;
	cout << "Ingresa el valor de Z del primer vector: " << endl;
	cin >> vector4th.z;
	cout << "Ingresa el valor de W del primer vector: " << endl;
	cin >> vector4th.w;
	vector4th.setVector4(vector4th.x, vector4th.y, vector4th.z, vector4th.w);

	do{
		cout << " " << endl;
		cout << "Elige alguna opción: " << endl;
		cout << "1. Sumar				2.Restar" << endl;
		cout << "3. Multiplicar				4.Dividir" << endl;
		cout << "5. Producto punto			6.Producto cruz" << endl;
		cout << "7. Calcular magnitud			8.Normalizar" << endl;
		cout << "0. Volver al menú principal" << endl;
		cin >> opti;

		switch (opti)
		{
		case 1:
			vector4.Addition(vector4th);
			printVector4();
			break;

		case 2:
			vector4.Substraction(vector4th);
			printVector4();
			break;

		case 3:
			vector4.Multiplication(vector4th);
			printVector4();
			break;

		case 4:
			vector4.Division(vector4th);
			printVector4();
			break;

		case 5:
			vector4.dotProduct(vector4th);
			cout << "El resultado del vector es: " << vector4.resultx << endl;
			break;

		case 6:
			//It is not possible to obtain a cross product for 4D vectors, so this calcultes if both vectors are octagonal
			//Octagonal means that two vectors forms a 90° angle betwwen them and they don't share a direction in that space
			cout << "Lo siento, pero el producto cruz es pensado para vectores en 3D,"
				"si bien es calculable también en vectores 2D, en 4D no. A cambio compruebo si son octagonales:" << endl;
			vector4.crossProduct(vector4th);
			break;

		case 7:
			vector4.Magnitude(vector4th);
			cout << "La magnitud del vector es: " << vector4.resultx << endl;
			break;

		case 8:
			vector4.Normalize(vector4th);
			cout << "Normalizar al vector da: " << vector4.resulty << endl;
			break;
		case 0:
			menu();
			break;

		default:
			cout << "Esa no es una opción valdia" << endl;
			break;
		}
	}while (opti != 0);
}

void App::printVector2()
{
	cout << "El resultado es: (" << vector2.resultx << ", " << vector2.resulty << ")" << endl;
}

void App::printVector3()
{
	cout << "El resultado es: (" << vector3.resultx << ", " << vector3.resulty <<", " << vector3.resultz << ")" << endl;
}

void App::printVector4()
{
	cout << "El resultado es: (" << vector4.resultx << ", " << vector4.resulty << ", " << vector4.resultz << ", " << vector4.resultw << ")" << endl;
}