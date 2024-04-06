#include<iostream>
#include<cmath>

int main() {

    double a, b, c;

    std::cout<<"Enter two sides of Triangle (a and b)\n";
    std::cin>>a>>b;

    c = sqrt(pow(a,2)+pow(b,2));
    std::cout<<"Hypotenuse is "<<c<<"\n";

    return 0;
}