#include <iostream>

using namespace std;

int main()
{
	double x = 3.123;
	cout << x << endl;

	int y = (int) x;
	cout << y << endl;

	int sum = 19;
	int count = 3;
	/* without a cast, the result of this division would be 6 */
	double mean = (double) sum / count;
	cout << mean << endl;

	return 0;
}

