#ifndef VECTOR2_H
#define VECTOR2_H

#include <iostream>
#include <cmath>

class Vector2
{
	public:
		double x, y;
		Vector2(double _x, double _y);
		double length();
		Vector2 normalize();
	private:
		friend std::ostream &operator << (std::ostream &os, const Vector2 &vec);
		friend Vector2 operator + (const Vector2 &vec_1, const Vector2 &vec_2); //Vector2 Addition
		friend Vector2 operator - (const Vector2 &vec_1, const Vector2 &vec_2); //Vector2 Subtraction
		friend Vector2 operator * (const Vector2 &vec_1, const Vector2 &vec_2); //Vector2 Multiplication
		friend Vector2 operator / (const Vector2 &vec_1, const Vector2 &vec_2); //Vector2 Division
		
		friend Vector2 &operator += (Vector2 &vec_1, const Vector2 &vec_2);
		friend Vector2 &operator -= (Vector2 &vec_1, const Vector2 &vec_2);
		friend Vector2 &operator *= (Vector2 &vec_1, const Vector2 &vec_2);
		friend Vector2 &operator /= (Vector2 &vec_1, const Vector2 &vec_2);

		friend Vector2 operator * (const Vector2 &vec, const double &value); //Vector2 * double
		friend Vector2 operator / (const Vector2 &vec, const double &value); //Vector2 / double
								       
};
#endif
