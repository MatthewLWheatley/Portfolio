#include <iostream>

int main()
{
    float Fahrenheit = 95.0f; 
    float Celsius = (Fahrenheit - 32) * 0.5556;

    std::cout << Fahrenheit << "F is equal to "<< Celsius << "C." << std::endl;
}

