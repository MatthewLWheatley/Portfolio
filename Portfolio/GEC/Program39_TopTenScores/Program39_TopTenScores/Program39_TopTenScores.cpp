#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        cout << "1.\tEnter a score\n" << "2.\tDisplay scores\n" << "3.\tExit\n";
        string option;
        cin >> option;
        if (option == "1" || option == "2" || option == "3")
        {
            system("cls");
            if (option == "3")
            {
                break;
            }
            else if (option == "2")
            {
                ifstream inFile;
                inFile.open("Score.txt");
                string lineOfFile;
                while (getline(inFile, lineOfFile))
                {
                    cout << lineOfFile << endl;
                }
                inFile.close();
                cout << "press enter to return to the menu\n";
                cin.get();
                cin.get();
                system("cls");
            }
            else if (option == "1")
            {
                string score, name;
                int intScore;
                while (true)
                {
                    cout << "please enter your score\n";
                    cin >> score;
                    intScore = stoi(score);

                }
                cout << "please enter your name\n";
                cin >> name;
                ifstream inFile;
                inFile.open("Score.txt");
                string lineOfFile, scoreboard[10];
                int i = 0;
                while (getline(inFile, lineOfFile))
                {
                    //cout << lineOfFile << endl;
                    scoreboard[i] = lineOfFile;
                    i++;
                }
                i--;
                inFile.close();

                int pos = scoreboard[i].find(":") + 2;
                int length = scoreboard[i].length();
                int lowestScore = stoi(scoreboard[i].substr(pos, (length - pos)));
                int j = 0;
                while (stoi(score) > lowestScore)
                {
                    j++;
                    pos = scoreboard[i-j].find(":") + 2;
                    length = scoreboard[i-j].length();
                    lowestScore = stoi(scoreboard[i-j].substr(pos, (length - pos)));
                    if (i - j == 0) 
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            system("cls");
            cout << "this is a invalid option\n";
        }
    }
}