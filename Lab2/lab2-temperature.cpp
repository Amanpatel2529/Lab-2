#include <iostream>
using namespace std;

int main()
{
	float C, F;
	cout << "Enter your temperature in Celcius: ";
	cin >> C;
	F = C * 1.8 + 32;
	cout << "In Celcius: " << C << "*C ;" << endl;
	cout << "In Fahrenheit: " << F << "F ;" << endl;

	return 0;
}