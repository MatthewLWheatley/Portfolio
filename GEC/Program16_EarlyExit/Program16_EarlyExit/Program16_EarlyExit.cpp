#include <iostream>

using namespace std;

int main()
{

	int playerLife = 100;
	int i;
	for (i = 1; i <= 10; i++) {
		int damage = 0;
		cout << "the players life points is at: " << playerLife << endl;
		cout << "Question " << i << ": How much damge shall i deal?\n";
		cin >> damage;
		playerLife -= damage;
		if (playerLife <= 0) 
		{
			cout << "Early end. player dead\n";
			break;
		}
	}
	if (i >= 10 && playerLife > 0) 
	{
		cout << "all questions asked. player survived"<< endl;
	}
}