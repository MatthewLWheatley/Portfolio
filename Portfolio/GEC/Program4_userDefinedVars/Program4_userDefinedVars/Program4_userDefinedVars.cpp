#include <iostream>

int main()
{
    typedef int cost;

    enum CharMake
    {
        FORD = 1,
        FIAT,
        TESLA,
        VW,
        BMW,
        ASTONMARTIN,
        HONDA,
        NISSAN,
        TOYOTA,
        AUDI,
        JAGUAR,
        DODGE
    };

    cost price = 13000;
    CharMake id = HONDA;

    std::cout << "The cost of my car is: " << price << std::endl;
    std::cout << "The id of my car is: " << id << std::endl;

}