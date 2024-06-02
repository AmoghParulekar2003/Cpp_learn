#include<iostream>

int main() {

    //ternary operator ?: replacement to an if/else statement
    //condition ? expression1 : expression2

    int number = 9;
    number % 2 == 0 ? std::cout<<"Even Number" : std::cout<<"Odd number\n";

    bool hungry = true;
    std::cout<<(hungry ? "Eat food" : "Don't eat food");

    return 0;
}