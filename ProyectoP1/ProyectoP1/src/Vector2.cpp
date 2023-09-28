#include "Vector2.h"

Vector2::Vector2()
{
}

Vector2::~Vector2()
{
}


void Vector2::setVector2()
{
    cout << "Ingresa el valor de X: " << endl;
    cin >> x;
    cout << "Ingresa el valor de Y: " << endl;
    cin >> y;

    cout << "X = " << x << ", Y = " << y << endl;
}

Vector2 Vector2::dotProduct()
{
    cout << "Ingresa el valor por el cual deseas calcular el producto punto: " << endl;
    cin >> dotValor;

    Vector2 copy;
    copy.x = x * dotValor;
    copy.y = y * dotValor;
    return copy;

    cout << "X = " << x << ", Y = " << y << endl;
}

int Vector2::crossProduct(Vector2 _vec)
{
    return ((x * _vec.y) - (y * _vec.x));

    cout << "X = " << x << ", Y = " << y << endl;
}