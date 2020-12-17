#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	int playerScore = 0;
	int computerScore = 0;

	int compLastChoice = 0;

	srand(time(NULL));

	while (true) 
	{
		string choice;
		while (true)
		{
			cout << "Rock, Paper or Scissors\n";
			cout << "Enter you selection: ";
			getline(cin, choice);
			choice[0] = toupper(choice[0]);
			if (choice != "Scissors" && choice != "Paper" && choice != "Rock")
			{
				cout << "That is not a option";
			}
			else 
			{
				break;
			}
		}
		
		int computerChoice; 
		while (true) 
		{
			computerChoice = (rand() % 9 + 1) % 3 + 4;
			if (computerChoice != compLastChoice || (rand() % 2 + 1) == 2)
			{
				break;
			}
		}
		 
		
		compLastChoice = computerChoice;
		int playerChoice = 0;

		cout << "The computer chose: ";

		if (computerChoice == 4)
		{
			cout << "Scissors\n";
		}
		else if (computerChoice == 5)
		{
			cout << "Paper\n";
		}
		else if (computerChoice == 6)
		{
			cout << "Rock\n";
		}
		else 
		{
			break;
		}
		if (choice == "Rock") 
		{
			playerChoice = 1;
		}
		if (choice == "Paper")
		{
			playerChoice = 2;
		}
		if (choice == "Scissors")
		{
			playerChoice = 3;
		}

		if (playerChoice + computerChoice == 7) 
		{
		cout << "it was a draw\n";
		}
		if (playerChoice + computerChoice == 8 || playerChoice + computerChoice == 5)
		{
			cout << "Congrats, you win\n";
			playerScore++;
		}
		if (playerChoice + computerChoice == 6 || playerChoice + computerChoice == 9)
		{
			cout << "Oh No, the computer wins\n";
			computerScore++;
		}
		cout << "you need: " << 3 - playerScore << " to win\n";
		cout << "the computer needs: " << 3 - computerScore << " to win\n";
		cout << "******************\n";
		if (playerScore == 3) 
		{
			cout << "Congrats you won the game...\nGame Over...";
			break;
		}
		if (computerScore == 3)
		{
			cout << "Oh No, you lost the game...\nGame Over...";
			break;
		}
	}
}