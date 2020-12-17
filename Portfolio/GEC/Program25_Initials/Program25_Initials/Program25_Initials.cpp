#include <iostream>

using namespace std;

int main()
{
    std::cout << "please enter the intial of your first name initial, followed by a space, their middle name initial followed by a space and the entirety of their surname. \n";
    char name[255];
    cin.getline(name, 255);
    int i;
    for (i = 0;i < size(name) ; i++) 
    {
        if (name[i] == ' ') 
        {
            break;
        }
    }
    cout << name[i - 1] << endl;
    i++;
    for (i = i; i < size(name); i++)
    {
        if (name[i] == ' ')
        {
            break;
        }
    }
    cout << name[i - 1]<<endl;
    i++;
    for (i = i; i < size(name); i++)
    {
        cout << name[i];
        if (name[i] == '\0')
        {
            break;
        }
    }
}