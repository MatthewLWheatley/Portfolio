#include <iostream>

using namespace std;

int main()
{
    int rain = 1, snow = 2;
    int weather;
    float temp;
    cout << "Please tell me if it is raining with '1' or snowing with '2'." << endl;
    cin >> weather;
    cout << weather << "what is the temp outside in C." << endl;
    cin >> temp;
    if (weather == rain)
    {
        if (temp > 15)
        {
            cout << "wear a light raincoat" << endl;
        }
        else
        {
            cout << "wear a thick coat." << endl;
        }
    }
    else if (weather == snow)
    {
        if(temp > 5)
        {
            cout << "wear something warm" << endl;
        }
        else if (temp > 0)
        {
            cout << "them to wrap up well" << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }
    else 
    {
        cout << "have a nice day as it is neither raining nor snowing. " << endl;
    }
}