#pragma once

class Shape {
protected:
	double x, y;
public:
	Shape()=default;
	Shape(double x, double y) :x(x), y(y){}
	virtual double area() = 0;
	virtual void move(double x, double y)final; //child ispolzuetsi no ne peregruzhat' nel'zia

};
void Shape::move(double x, double y)
{
	this->x = x;
	this->y = y;
}