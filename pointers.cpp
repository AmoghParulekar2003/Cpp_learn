#include<iostream>

int main() {

    //pointers = variable that stores a memory address of another variable
    //           sometimes it's easy to work with an address
    //&  address-of operator
    //* dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizza[5] = {"margherita", "veggie feast", "pepperoni", "ham pizza", "paneer tikka"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizza;

    std::cout<<"My name is "<<*pName<<" and I am "<<*pAge<<" years old\n";
    std::cout<<*pFreePizzas;

    return 0;
}