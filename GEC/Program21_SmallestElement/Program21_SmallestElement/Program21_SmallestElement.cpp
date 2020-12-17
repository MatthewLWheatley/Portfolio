#include <iostream>

using namespace std;

int main()
{
    int myArray[10] = {};
    int smallest,position = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter a number\n";
        cin >> myArray[i];
    }
    smallest = myArray[0];
    for (int i = 1; i < 10; i++)
    {
        if (myArray[i] < smallest) 
        {
            smallest = myArray[i];
            position = i;
        }
    }
    cout << "the smallest number is " << smallest << " in the postion of " << ++position << endl;
}