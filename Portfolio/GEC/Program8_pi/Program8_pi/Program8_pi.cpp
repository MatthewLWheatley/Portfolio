#include <iostream>

int main()
{
    const float pi = 3.14159;
    float radius = 25.0f, area;

    area = pi * std::pow(radius,2);

    std::cout << "The area of a cirlcle with a radius of " << radius << " is "<< area << std::endl;
}