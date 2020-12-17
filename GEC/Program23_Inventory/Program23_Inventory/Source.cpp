#include <iostream>
#include <string>

using namespace std;

void OutputInventory(int MAX_ITEMS, string Inventory[]);

void main() 
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";

	OutputInventory(MAX_ITEMS,inventory);

	cout << "you have picked up a wizard's staff\n" << "would you like to swap it for the dagger in their inventory?\n"<< "y / n\n";
	char userInput;
	cin >> userInput;
	if (userInput == 'y') 
	{

		inventory[3] = "Wizard's staff";
		OutputInventory(MAX_ITEMS, inventory);
		
	}
	else
	{
		cout << "You left the Wizard's staff behind\n";
		OutputInventory(MAX_ITEMS, inventory);
	}
}

void OutputInventory(int MAX_ITEMS, string Inventory[])
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		cout << "inventory slot "<< i+1 << ": " << Inventory[i]<< endl;
	}
}