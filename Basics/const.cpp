#include<iostream>

int main() {

    //The const keyword specifies that a variable's value is constant
    //tells compiler to prevent anything from modifying it
    //(read-only)

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout<<"Circumference is "<<circumference<<" cm\n";

    return 0;
}