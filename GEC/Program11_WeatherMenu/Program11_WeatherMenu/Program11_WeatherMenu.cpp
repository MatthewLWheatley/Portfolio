#include <iostream>

void main()
{
    while (true) {
        int userInput;

        std::cout << "Please choose an option:  1. Sunny 2. Cloudy 3.  Raining 4. Exit" << std::endl;

        std::cin >> userInput;

        switch (userInput)
        {
        case 1:
            std::cout << "dont forget sunscreen" << std::endl;
            break;
        case 2:
            std::cout << "dont forget your jumper" << std::endl;
            break;
        case 3:
            std::cout << "dont forget your umbrella" << std::endl;
            break;
        }
        if (userInput == 4) 
        {
            std::cout << "goodbye" << std::endl;
            break;
        }
    }
}