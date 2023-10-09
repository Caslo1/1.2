#include <iostream>

using namespace std;

int main()
{
	int Radius;
	float Area;
	float PI = 3.14;

	cout << "Enter your circle radius " << endl;
	cin >> Radius;
	Area = PI * Radius * Radius;
	cout << "Your circle area " << Area << endl;

	return 0;
}