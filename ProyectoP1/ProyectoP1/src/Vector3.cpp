#include "Vector3.h"

//Inicialization of the variables
Vector3::Vector3(): resultx(0.0f), resulty(0.0f), resultz(0.0f), x(0.0f), y(0.0f), z(0.0f)
{
}

Vector3::~Vector3()
{
}

void Vector3::setVector3(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}

void Vector3::dotProduct(Vector3 _vec)
{
    resultx = x * _vec.x;
    resulty = y * _vec.y;
    resultz = z * _vec.z;
    resultx = resultx + resulty + resultz;
}

void Vector3::crossProduct(Vector3 _vec)
{
    resultx = (y * _vec.z) - (z * _vec.y);
    resulty = (z * _vec.x) - (x * _vec.z); 
    resultz = (x * _vec.y) - (y * _vec.x);
}

void Vector3::Addition(Vector3 _vec)
{
    resultx = x + _vec.x;
    resulty = y + _vec.y;
    resultz = z + _vec.z;
}

void Vector3::Substraction(Vector3 _vec)
{
    resultx = x - _vec.x;
    resulty = y - _vec.y;
    resultz = z - _vec.z;
}

void Vector3::Multiplication(Vector3 _vec)
{
    resultx = x * _vec.x;
    resulty = y * _vec.y;
    resultz = z * _vec.z;
}

void Vector3::Division(Vector3 _vec)
{
    resultx = x / _vec.x;
    resulty = y / _vec.y;
    resultz = z / _vec.z;
}

void Vector3::Magnitude(Vector3 _vec)
{
    resultx = sqrt(x * _vec.x);
    resulty = sqrt(y * _vec.y);
    resultz = sqrt(z * _vec.z);
    resultx = resultx + resulty + resultz; //Since the magnitude is a single value, the resulting three values are added together
}

void Vector3::Normalize(Vector3 _vec)
{
    resultx = sqrt(x * _vec.x);
    resulty = sqrt(y * _vec.y);
    resultz = sqrt(z * _vec.z);
    resultx = resultx + resulty + resultz;

    resulty = (x / resultx, y / resultx, z/resultz); //Normalize is the same as in magnitude, but at the end each variable is divided by the magnitude.
}