/*************************************************************************
  > File Name       : src/Vector.cpp
  > Author          : yezuoyi
  > Mail            : yezuoyi@163.com 
  > Created Time    : 2018年02月08日 星期四 13时35分48秒
 ************************************************************************/

#include <iostream>

#include "project/Vector.hpp"

Vector::Vector() {

	x = y = 0.0;
}

Vector::Vector(double a, double b) {

	x = a;
	y = b;
}

Vector Vector::operator+(const Vector &other) const {

	return Vector(x + other.x, y + other.y);
}

void Vector::print() {

	std::cout << "(" << x << "," << y << ")" << std::endl;
}
