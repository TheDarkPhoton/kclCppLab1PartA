#include <iostream>

using namespace std;

int add(int* x, int* y)
{
	int sum = *x + *y;
	return sum;
}

int main()
{
	int x = 1;
	int* x_ptr = &x;

	int y = 2;
	int* y_ptr = &y;

	int z = add(x_ptr, y_ptr);

	cout << z << endl;
}

