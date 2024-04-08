#include<iostream>

int main() {

    int number;

    do {
        std::cout<<"Enter a positive number\n";
        std::cin>>number;
    } while(number < 0);

    std::cout<<number;

    return 0;
}