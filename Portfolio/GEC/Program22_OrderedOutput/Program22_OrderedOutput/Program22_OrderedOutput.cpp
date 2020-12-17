#include <iostream>
#include <algorithm>

using namespace std;

int largest = -1;
int position = -1;

void largestcheck(int myArray[5]);
void printArray(int myArray[5]);

int main()
{
	int myArray[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "please enter a number\n";
		cin >> myArray[i];
	}
	cout << endl;

	cout << "[before sorts]\n";
	printArray(myArray);
	largestcheck(myArray);
	cout << endl;
	
	cout << "[after asending sort]\n";
	sort(begin(myArray), end(myArray));
	printArray(myArray);
	largestcheck(myArray);
	cout << endl;

	cout << "[after descending sort]\n";
	sort(begin(myArray), end(myArray), greater<>());
	printArray(myArray);
	largestcheck(myArray);
	cout << endl;
}

void printArray(int myArray[5]) 
{
	for (int i = 0; i < 5; i++)
	{
		cout << myArray[i];
	}
	cout << endl;
}

void largestcheck(int myArray[5])
{
	for (int i = 0; i < 5; i++)
	{
		if (myArray[i] > largest)
		{
			largest = myArray[i];
			position = i;
		}
	}
	cout << "the largest number is " << largest << " in the postion of " << ++position << endl;
	largest = -1;
	position = -1;
}