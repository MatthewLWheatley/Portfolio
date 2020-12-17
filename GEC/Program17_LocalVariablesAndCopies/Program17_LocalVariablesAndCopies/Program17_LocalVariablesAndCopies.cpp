#include <iostream>

using namespace std;

void addtwo(int num);

int main()
{
    int myNum = 6;
    cout << "main [before]: myNum = " << myNum << endl;
    addtwo(myNum);
    cout << "main [after]: myNum = " << myNum << endl;
}

void addtwo(int num)
{
    num += 2;

    cout << "function: num = " << num << endl;
}