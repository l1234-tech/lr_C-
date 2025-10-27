#include <iostream>
std::string exist_triangle_pu(int a, int b, int c) {
	int flag = 0;
	if (a * a == (b * b + c * c))
	{
		flag = 1;
	}
	if (c * c == (a * a + b * b))
	{
		flag = 1;
	}
	if (b * b == (c * c + a * a))
	{
		flag = 1;
	}
	if (flag == 1) {
		return "YES";
	}
	else {
		return "UNDEFINED";
	}
}