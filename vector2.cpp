#include "vector2.h"

Vector2::Vector2(double _x = 0, double _y = 0)
{
	x = _x;
	y = _y;
}

double Vector2::length()
{
	return sqrt(((x * x) + (y * y)));
}

Vector2 Vector2::normalize()
{
	Vector2 _vec;
	_vec.x = x / length();
	_vec.y = y / length();
	return _vec;	
}

std::ostream &operator << (std::ostream &os, const Vector2 &vec)
{
	std::string x_str = std::to_string(vec.x);
	std::string y_str = std::to_string(vec.y);
	x_str.erase(x_str.find_last_not_of('0') + 1, std::string::npos);
	x_str.erase(x_str.find_last_not_of('.') + 1, std::string::npos);
	y_str.erase(y_str.find_last_not_of('0') + 1, std::string::npos);
	y_str.erase(y_str.find_last_not_of('.') + 1, std::string::npos);

	std::string str = "(" + x_str + ", " + y_str + ")";
	os << str;
	return os;
}


Vector2 operator + (const Vector2 &vec_1, const Vector2 &vec_2)
{

	Vector2 _vec_s;
	_vec_s.x = vec_1.x + vec_2.x;
	_vec_s.y = vec_1.y + vec_2.y;
	return _vec_s;
}

Vector2 operator - (const Vector2 &vec_1, const Vector2 &vec_2)
{

	Vector2 _vec_s;
	_vec_s.x = vec_1.x - vec_2.x;
	_vec_s.y = vec_1.y - vec_2.y;
	return _vec_s;
}

Vector2 operator * (const Vector2 &vec_1, const Vector2 &vec_2)
{
	Vector2 _vec_s;
	_vec_s.x = vec_1.x * vec_2.x;
	_vec_s.y = vec_1.y * vec_2.y;
	return _vec_s;
}

Vector2 operator / (const Vector2 &vec_1, const Vector2 &vec_2)
{
	Vector2 _vec_s;
	_vec_s.x = vec_1.x / vec_2.x;
	_vec_s.y = vec_1.y / vec_2.y;
	return _vec_s;
}

Vector2 &operator += (Vector2 &vec_1, const Vector2 &vec_2)
{
	vec_1.x += vec_2.x;
	vec_1.y += vec_2.y;
	return vec_1;
}

Vector2 &operator -= (Vector2 &vec_1, const Vector2 &vec_2)
{
	vec_1.x -= vec_2.x;
	vec_1.y -= vec_2.y;
	return vec_1;
}


Vector2 &operator *= (Vector2 &vec_1, const Vector2 &vec_2)
{
	vec_1.x *= vec_2.x;
	vec_1.y *= vec_2.y;
	return vec_1;
}


Vector2 &operator /= (Vector2 &vec_1, const Vector2 &vec_2)
{
	vec_1.x /= vec_2.x;
	vec_1.y /= vec_2.y;
	return vec_1;
}


Vector2 operator * (const Vector2 &vec, const double &value)
{
	Vector2 _vec_s;
	_vec_s.x = vec.x * value;
	_vec_s.y = vec.y * value;
	return _vec_s;
}

Vector2 operator / (const Vector2 &vec, const double &value)
{
	Vector2 _vec_s;
	_vec_s.x = vec.x / value;
	_vec_s.y = vec.y / value;
	return _vec_s;
}
