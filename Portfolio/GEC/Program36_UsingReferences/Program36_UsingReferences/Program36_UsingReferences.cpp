#include <iostream>

using namespace std;

void plus25(int& number);
void minus25(int& number);

int main()
{
	int num;

	cout << "please enter a number" << endl;
	cin >> num;
	int& rNum = num;

	cout << num << endl;

	plus25(rNum);

	cout << num << endl;

	cout << "please enter another number" << endl;
	cin >> num;

	cout << num << endl;

	minus25(rNum);

	cout << num << endl;
}

void plus25(int& number) 
{
	number += 25;
}

void minus25(int& number) 
{
	number -= 25;
}