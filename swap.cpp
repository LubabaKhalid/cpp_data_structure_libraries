#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string t;
	float a, b, c;
	cout << "Enter 1st number:" << endl;
	getline (cin, t);
	a = stof(t);
	cout << "Enter 2nd number:" << endl;
	getline (cin, t);
	b = stof(t);
	c = a;
	a = b;
	cout << "After swap:" << endl;
	cout << a << endl;
	b = c;
	cout << b << endl;
	 return 0;
}