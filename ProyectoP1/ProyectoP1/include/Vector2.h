#pragma once
#include "Commons.h"

class Vector2
{
public:
    Vector2();
    ~Vector2();

	void setVector2(float _x, float _y); //This function is used to obtain the values "x", "y".

    void dotProduct(Vector2 _vec);

	//_vec corresponds to a second vector
    float crossProduct(Vector2 _vec); //This is for calculating the cross product, also known as vector product

	void Addition(Vector2 _vec); //This function calculate the sum between two vectors

	void Substraction(Vector2 _vec); //This function calculate the substraction between two vectors

	void Multiplication(Vector2 _vec); //This function calculate the multiplication between two vectors

	void Division(Vector2 _vec); //This function calculate the division between two vectors

	void Magnitude(Vector2 _vec); //This function calculate the magnitude between two vectors

	void Normalize(Vector2 _vec);  //This function normalize two vectors

    float x;
    float y;
	float resultx; //Variable to get the results in x
	float resulty; //Variable to get the results in y

private:
    
};
