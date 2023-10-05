#pragma once
#include "Commons.h"

class Vector4
{
public:
    Vector4();
    ~Vector4();

	void setVector4(float _x, float _y, float _z, float _w); //This function is used to obtain the values "x", "y", "z" and "w".

	void dotProduct(float _value);

	void crossProduct(Vector4 _vec);

	void Addition(Vector4 _vec);

	void Substraction(Vector4 _vec);

	void Multiplication(Vector4 _vec);

	void Division(Vector4 _vec);

	void Magnitude(Vector4 _vec);

	void Normalize(Vector4 _vec);

	float x;
	float y;
	float z;
	float w;
	float resultx;
	float resulty;
	float resultz;
	float resultw; //Variable to get the results in w, because as a 4D vector

private:

};