#include <iostream>

void main()
{
    int totalPackets = 40;
    int numberOfStudents = 14;
    int studentShare = (totalPackets - (totalPackets % numberOfStudents)) / numberOfStudents;
    int leftover = totalPackets % numberOfStudents;
    std::cout << "out of " << totalPackets << " packets each student gets " << studentShare << " and left over there will be " << leftover << std::endl;

    
}