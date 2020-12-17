#include <iostream>

using namespace std;

int smallestNumber(int a, int b);

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int first, second;
		cout << "please enter your first number" << endl;
		cin >> first;
		cout << "please enter another number"<< endl;
		cin >> second;
		if (first == second)
		{
			cout << first << " and " << second << " are the same number";
		}
		else
		{
			int smallest = smallestNumber(first, second);
			cout << "set " << i << ": the smalest number out of " << first << " and " << second << " is " << smallest << endl;
		}
	}
}

int smallestNumber(int a, int b) 
{
	if (a < b) 
	{
		return a;
	}
	else 
	{
		return b;
	}
}