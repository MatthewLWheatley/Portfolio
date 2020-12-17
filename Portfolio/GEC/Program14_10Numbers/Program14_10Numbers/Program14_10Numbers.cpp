#include <iostream>

using namespace std;

int main()
{
    int first, second, another;;
    cout << "please enter the first numeber " << endl;
    cin >> first;
    cout << "please enter the second numeber " << endl;
    cin >> second;
    float sum = first + second, average = sum / 2;
    int count = 2;
    cout << "the sum is " << sum << " and the is the average "  << average << endl;
    while (true)
    {
        count++;
        cout << "enter another number" << endl;
        cin >> another;
        if (another == 0) 
        {
            break;
        }
        sum += another;
        average = sum / count;
        cout << "the sum is " << sum << " and the is the average " << average << endl;
    }
}