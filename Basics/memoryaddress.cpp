#include<iostream>

int main() {

    //memory address = a location in memory where data is stored
    //a memory address can accessed with & (address-of operator)

    std::string name = "Bro";
    bool student = true;
    int age = 21; 

    std::cout<<&name<<'\n';
    std::cout<<&student<<'\n';
    std::cout<<&age<<'\n';

    return 0;
}