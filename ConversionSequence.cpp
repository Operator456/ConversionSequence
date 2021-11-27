#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float n, c, w, g; //declaring variables
	cout << "enter weight in pounds\n"; //inputting variables
	cin >> w;
	cout << "enter height in inches\n";
	cin >> n;
	g = w * 453.59237; //converting pounds to grams
	cout << "Weight in Grams is " << g << endl;
	cout << "Weight in Kilograms is " << g / 1000 << endl;
	c = n * 2.54;  //converting inches to centimeters
	cout << "Height in centimeters is " << c << endl;
	cout << "Height in Meters is " << c / 100;
	getchar();
return 0;
}