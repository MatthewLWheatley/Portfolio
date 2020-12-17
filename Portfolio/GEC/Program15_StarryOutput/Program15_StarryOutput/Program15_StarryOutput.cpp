#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    while (true) 
    {
        cout << "please input a number between 1 and 10" << endl;
        int number;
        cin >> number;
        for (int i = 1; i <= number; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << "would you wish to have another go [Y or N]" << endl;
        char userInput;
        cin >> userInput;
        if (userInput == 'y') 
        {
            
        }
        else 
        {
            break;
        }
    }
    cout << "goodbye." << endl;
    this_thread::sleep_for(std::chrono::seconds(2));
    exit;
}