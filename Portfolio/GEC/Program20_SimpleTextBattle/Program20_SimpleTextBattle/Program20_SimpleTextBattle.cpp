#include <iostream>

using namespace std;

int playerHealth = 1000, enemyHealth = 2000;
bool playing = true;

void attackChoice(int choice);
bool playState();

int main()
{
	int choice;

	cout << "you have met a troll and have 3 options of attack\n";

	while (playing) 
	{
		bool checkInput = true;
		while (checkInput)
		{
			cout << "1. use sword, 2. use magic, 3. use axe\n";
			cout << "choices have different effects\n";
			cin >> choice;
			if (choice == 1 || choice == 2 || choice == 3)
			{
				checkInput = false;
			}
			else 
			{
				cout << "that was not a option try again\n";
			}
		}
		attackChoice(choice);
		playing = playState();
	}

	return 0;
}

void attackChoice(int choice) 
{
	const int userChoice = choice, swordDamage = 300, magicDamage = 650, axeDamage = 450, trollSword = 350, trollMagic = 50, trollAxe = 100;

	switch (userChoice)
	{
	case 1:
		enemyHealth -= swordDamage;
		playerHealth -= trollSword;
		break;
	case 2:
		enemyHealth -= magicDamage;
		playerHealth -= trollMagic;
		break;
	case 3:
		enemyHealth -= axeDamage;
		playerHealth -= trollAxe;
		break;
	}
	cout << "you have hit the troll\n";
	cout << "the troll has hit you\n";
	if (playerHealth < 0)
	{
		playerHealth = 0;
	}
	if (enemyHealth < 0)
	{
		enemyHealth = 0;
	}
	cout << "Player health: " << playerHealth << "\n";
	cout << "Troll health: " << enemyHealth << "\n";
}

bool playState() 
{
	char playAgain;
	if (enemyHealth <= 0 || playerHealth <= 0)
	{
		if (enemyHealth <= 0)
		{
			cout << "you have killed the troll and won\n";
		}
		else if (playerHealth <= 0)
		{
			cout << "you benn have killed and lost\n";
		}
		cout << "Play again y / n\n";
		cin >> playAgain;
		if (playAgain == 'y')
		{
			enemyHealth = 2000;
			playerHealth = 1000;
			return true;
		}
		else
		{
			return false;
		}
	}
	else 
	{
		return true;
	}
}