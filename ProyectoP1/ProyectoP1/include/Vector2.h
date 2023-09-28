#pragma once
#include "Commons.h"

class Vector2
{
public:
    Vector2();
    ~Vector2();

    void setVector2();

    Vector2 dotProduct();

    int crossProduct(Vector2 _vec);


    int x;
    int y;
    int dotValor;

private:
    
};
