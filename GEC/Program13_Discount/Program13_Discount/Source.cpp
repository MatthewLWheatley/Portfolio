#include <iostream>

using namespace std;

void main()
{

	char status;
	int gameChoice;
	cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other." << endl;
	cin >> status;
	cout << "which game would you like, 1 or 2?" << endl;
	cin >> gameChoice;
	if ((status == 's' || status == 't') && gameChoice == 1)
	{
		cout << "you can get 20% discount" << endl;
	}
	else if ((status == 's' || status == 't') && gameChoice == 2)
	{
		cout << "you can get 10% discount" << endl;
	}
	else
	{
		cout << "you are not entitled to a discount" << endl;
	}

}