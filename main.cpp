#include <iostream>

using namespace std;

int main()
{
	/* integer types - whole numbers */

	/* each of these types can ascendingly represent a greater range of
	   values but they consume more memory */
	char a = 127;
	short b = 32767;
	int c = 2147483647;
	long d = 4294967295;

	/* each of the above types dedicate half the memory they consume to
	   represent negative numbers but this type does not so it can
	   represent twice as many positive numbers */
	unsigned char e = 255;

	/* floating point types - real numbers */
	float x = 1.01234;
	/* a double can represent a real number more precisely than a float
	   but again consumes more memory */
	double y = 1.0123456789;

	return 0;
}

