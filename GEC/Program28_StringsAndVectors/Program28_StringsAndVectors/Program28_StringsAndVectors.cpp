#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printInventory(string Inventory[], bool numbered);
void pickupitem(string Inventory[], string option1, string option2);

string inventory[3] = { "Sword" };

int main()
{
    pickupitem(inventory, "Staff", "Knife");
    cout << endl;
    printf("Your inventory holds:\n");
    printInventory(inventory, false);
    cout << endl;

    pickupitem(inventory, "Healing Potion", "Fire Spell");
    cout << endl;
    printf("Your inventory holds:\n");
    printInventory(inventory, false);
    cout << endl;

    printf("Your Invetory is full\n\n");

    pickupitem(inventory, "magic ring", "");
    cout << endl;
    printf("Your inventory holds:\n");
    printInventory(inventory, false);
    cout << endl;

    printf("\nYou Have Been Robbed!!\n\n");
    inventory[0] = "";
    inventory[1] = "";
    inventory[2] = "";
    printf("inventory is now\n");
    printInventory(inventory, false);
}

void pickupitem(string inventory[], string option1, string option2)
{
    if (inventory[2].length() <= 0)
    {
        cout << "Type which item to keep: " << option1 << " or " << option2 << "\n";
        for (int j = 0; j < sizeof(inventory) - 1; j++)
        {
            if (inventory[j] == "")
            {
                getline(cin, inventory[j]);
                break;
            }
        }
    }
    else
    {
        cout << "You Have found a " << option1 << " what would you like to replace in your inventory\n";
        int choice;
        printInventory(inventory, true);
        cin >> choice;
        inventory[choice - 1] = option1;
    }
}

void printInventory(string inventory[], bool numbered)
{

    for (int i = 0; i < sizeof(inventory) - 1; i++)
    {
        if (inventory[i] == "")
        {
            if (i == 0)
            {
                cout << "Empty!" << endl;
            }
            break;
        }
        if (numbered)
        {
            cout << i+1 << ": " <<inventory[i] << endl;
        }
        else
        {
            cout << inventory[i] << endl;
        }
    }

}