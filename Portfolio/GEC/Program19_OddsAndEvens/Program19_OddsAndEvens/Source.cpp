#include <iostream>

using namespace std;

bool EvenCheck(int Num);
void OutputResults(int oddCount ,int evenCount ,int oddTotal ,int evenTotal);

void main() 
{
	int num;
	int oddCount = 0, evenCount = 0, oddTotal = 0, evenTotal = 0;
	for (int i = 0; i < 10; i++) 
	{
		cout << "please enter a number" << endl;
		cin >> num;
		if (EvenCheck(num)) 
		{
			oddTotal += num;
			oddCount++;
		}
		else 
		{
			evenTotal += num;
			evenCount++;
		}
	}
	OutputResults(oddCount, evenCount, oddTotal, evenTotal);
}

bool EvenCheck(int num) 
{
	if (num % 2 == 0) 
	{
		return false;
	}
	else 
	{
		return true;
	}
}

void OutputResults(int oddCount, int evenCount, int oddTotal, int evenTotal) 
{
	cout << "The amount of odd numbers was " << oddCount << " and the total of them was "<< oddTotal<<".\n";
	cout << "The amount of even numbers was " << evenCount << " and the total of them was " << evenTotal << ".\n";
}