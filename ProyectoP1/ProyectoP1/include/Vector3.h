#pragma once
#include "Commons.h"

class Vector3
{
public:
	Vector3();
	~Vector3();

    void setVector2();

    Vector3 dotProduct();

    int crossProduct(Vector3 _vec);


    int x;
    int y;
    int dotValor;

private:

};

Vector3::Vector3()
{
}

Vector3::~Vector3()
{
}
