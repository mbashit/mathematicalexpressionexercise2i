// mathematicalexpressionexercise2i.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	double x, w, y;

	cout << "enter the value of x";
	cin >> x;
	cout << "enter the value of w ";
	cin >> w;

	y = (x + 3) * pow(5, w) /( 7 * (x - 4));
	cout << "the result is" << y << endl;

	return 0;
}

