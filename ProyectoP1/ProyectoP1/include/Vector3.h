#pragma once
#include "Commons.h"

class Vector3
{
public:
	Vector3();
	~Vector3();

	void setVector3(float _x, float _y, float _z); //This function is used to obtain the values "x", "y", "z".

	void dotProduct(Vector3 _vec);

	void crossProduct(Vector3 _vec);

	void Addition(Vector3 _vec);

	void Substraction(Vector3 _vec);

	void Multiplication(Vector3 _vec);

	void Division(Vector3 _vec); 

	void Magnitude(Vector3 _vec);

	void Normalize(Vector3 _vec);

	float x;
	float y;
	float z;
	float resultx;
	float resulty;
	float resultz; //Variable to get the results in z, because as a 3D vector
    

private:

};
