#include <iostream>

using namespace std;

void main() 
{
	float mySavings = 2000;
	float yourPercentage = 50;
	float yourShare = (mySavings * (yourPercentage / 100));

	cout << "Your share: " << yourShare << endl;
}