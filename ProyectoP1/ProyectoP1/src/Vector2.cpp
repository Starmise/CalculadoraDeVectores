#include "Vector2.h"

//Inicialization of the variables
Vector2::Vector2() : resultx(0.0f), resulty(0.0f), x(0.0f), y(0.0f)
{
}

Vector2::~Vector2()
{
}


void Vector2::setVector2(float _x, float _y)
{
    x = _x;
    y = _y;
}

void Vector2::dotProduct(float _value)
{
    resultx = x * _value;
    resulty = y * _value;
}

float Vector2::crossProduct(Vector2 _vec)
{
    return ((x * _vec.y) - (y * _vec.x));
}

void Vector2::Addition(Vector2 _vec)
{
    resultx = x + _vec.x;
    resulty = y + _vec.y;
}

void Vector2::Substraction(Vector2 _vec)
{
    resultx = x - _vec.x;
    resulty = y - _vec.y;
}

void Vector2::Multiplication(Vector2 _vec)
{
    resultx = x * _vec.x;
    resulty = y * _vec.y;
}

void Vector2::Division(Vector2 _vec)
{
    resultx = x / _vec.x;
    resulty = y / _vec.y;
}

void Vector2::Magnitude(Vector2 _vec)
{
    resultx = sqrt(x * _vec.x);
    resulty = sqrt(y * _vec.y);
    resultx = resultx + resulty; //Since the magnitude is a single value, both values are added together
}

void Vector2::Normalize(Vector2 _vec)
{
    resultx = sqrt(x * _vec.x);
    resulty = sqrt(y * _vec.y);
    resultx = resultx + resulty;

    resulty = (x / resultx, y / resultx); //Normalize is the same as in magnitude, but at the end each variable is divided by the magnitude.
}

