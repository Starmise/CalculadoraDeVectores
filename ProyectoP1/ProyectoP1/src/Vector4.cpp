#include "Vector4.h"

//Inicialization of the variables
Vector4::Vector4(): resultx(0.0f), resulty(0.0f), resultz(0.0f), resultw(0.0f), x(0.0f), y(0.0f), z(0.0f), w(0.0f)
{
}

Vector4::~Vector4()
{
}

void Vector4::setVector4(float _x, float _y, float _z, float _w)
{
    x = _x;
    y = _y;
    z = _z;
    w = _w;
}

void Vector4::dotProduct(float _value)
{
    resultx = x * _value;
    resulty = y * _value;
    resultz = z * _value;
    resultw = w * _value;
}

void Vector4::crossProduct(Vector4 _vec)
{
    resultx = x * _vec.x;
    resulty = y * _vec.y;
    resultz = z * _vec.z;
    resultw = w * _vec.w; //first they multiplicate between each other
    resultx = (resultx + resulty + resultz + resultw); //Then the resulting values are added together
    if (resultx == 0) //If the final sum is equal 0, then the vec is octagonal
    {
        cout << "Los dos vectores 4D sí son octagonales" << endl;
    }
    else { //Although it looks imposible to be octagonal, it may happens, for example, if Vec1=(1,2-1,0) and Vec2=(-2,1,0,3)
        cout << "Los dos vectores 4D NO son octagonales" << endl;
    }

}

void Vector4::Addition(Vector4 _vec)
{
    resultx = x + _vec.x;
    resulty = y + _vec.y;
    resultz = z + _vec.z;
    resultw = w + _vec.w;
}

void Vector4::Substraction(Vector4 _vec)
{
    resultx = x - _vec.x;
    resulty = y - _vec.y;
    resultz = z - _vec.z;
    resultw = w - _vec.w;
}

void Vector4::Multiplication(Vector4 _vec)
{
    resultx = x * _vec.x;
    resulty = y * _vec.y;
    resultz = z * _vec.z;
    resultw = w * _vec.w;
}

void Vector4::Division(Vector4 _vec)
{
    resultx = x / _vec.x;
    resulty = y / _vec.y;
    resultz = z / _vec.z;
    resultw = w / _vec.w;
}

void Vector4::Magnitude(Vector4 _vec)
{
    resultx = sqrt(x * _vec.x);
    resulty = sqrt(y * _vec.y);
    resultz = sqrt(z * _vec.z);
    resultz = sqrt(w * _vec.w);
    resultx = resultx + resulty + resultz; //Since the magnitude is a single value, the resulting four values are added together
}

void Vector4::Normalize(Vector4 _vec)
{
    resultx = sqrt(x * _vec.x);
    resulty = sqrt(y * _vec.y);
    resultz = sqrt(z * _vec.z);
    resultx = resultx + resulty + resultz;

    resulty = (x / resultx, y / resultx, z / resultz, w / resultw); //Normalize is the same as in magnitude, but at the end each variable is divided by the magnitude.
}