#pragma once
#include"Shape.h"
#define PI 3.14

class Circle: public Shape
{
private:
	double R;
public:
	Circle() = default;
	Circle(double x, double y, double R) :Shape(x, y), R(R) {};
	//void move (double x,double y){} 
	double area() override
	{
		return PI*R*R;
	}
};