//Program to find the slope of a line given two end points

#include <iostream>
#include <math.h>
 
int main()
{
    float slope;
    float x1, y1, x2, y2;
    float dx, dy;
 
    std::cout << "\t\tProgram to find the slope of a line given two end points\n";
 
    std::cout << "Enter X1: ";
    std::cin >> x1;
 
    std::cout << "Enter Y1: ";
    std::cin >> y1;
 
    std::cout << "Enter X2: ";
    std::cin >> x2;
 
    std::cout << "Enter Y2: ";
    std::cin >> y2;
 
    dx = x2 - x1;
    dy = y2 - y1;
    slope = dy / dx;
 
    std::cout << "\nSlope of the line with end points  (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ")  = ";
    std::cout << slope << "\n";
 
return 0;
}
