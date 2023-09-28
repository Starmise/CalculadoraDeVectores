#include "Vector3.h"

Vector3::Vector3()
{
}

Vector3::~Vector3()
{
}

void Vector3::setVector2()
{
    cout << "Ingresa el valor de X: " << endl;
    cin >> x;
    cout << "Ingresa el valor de Y: " << endl;
    cin >> y;

    cout << "X = " << x << ", Y = " << y << endl;
}

Vector3 Vector3::dotProduct()
{
    cout << "Ingresa el valor por el cual deseas calcular el producto punto: " << endl;
    cin >> dotValor;

    Vector3 copy;
    copy.x = x * dotValor;
    copy.y = y * dotValor;
    return copy;

    cout << "X = " << x << ", Y = " << y << endl;
}

int Vector3::crossProduct(Vector3 _vec)
{
    return ((x * _vec.y) - (y * _vec.x));

    cout << "X = " << x << ", Y = " << y << endl;
}