#include<iostream>

int main() {

    int rows, columns;
    char symbol;

    std::cout<<"Enter no. of rows and columns:\n";
    std::cin>>rows>>columns;

    std::cout<<"Enter the symbol to print: ";
    std::cin>>symbol;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            std::cout<<symbol<<' ';
        }
        std::cout<<"\n";
    }

    return 0;
}