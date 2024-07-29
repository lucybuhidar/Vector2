#include <iostream>

#include "vector2.h"

int main(int argc, char* argv[])
{
	Vector2 vec_1(100, 100);
	Vector2 vec_2(10, 10);
	vec_1 *= vec_2;
	std::cout << vec_1 << std::endl;
	std::cout << vec_2 << std::endl;
	return 0;
}
