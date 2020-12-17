#include <iostream>
using namespace std;


int main()
{
    int num = 1;

    cout << "num = " << num << endl;
    cout << "increment Operator before num = " << ++num << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "increment operator before after num = " << num++ << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "decrement Operator before num = " << --num << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "decrement operator before after num = " << num-- << endl;
    cout << "num after = " << num << endl;

    return 0;
}