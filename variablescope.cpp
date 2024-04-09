#include<iostream>

int myNum = 3;

void printNum();

int main() {

    // local variables = declared inside a function or block
    // global variables = declared outside all functions

    int myNum = 1;
    std::cout<<myNum<<"\n";
    std::cout<<::myNum<<"\n";
    printNum();

    return 0;
}

void printNum() {
    int myNum = 2;
    std::cout<<myNum<<"\n";
}