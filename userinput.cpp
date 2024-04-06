#include<iostream>

int main() {

    //cout << (insertion operator)
    //cin >> (deletion operator)

    std::string name;
    int age;

    std::cout<<"What's your age?\n";
    std::cin>>age;

    std::cout<<"What's your full name?\n";
    std::getline(std::cin>>std::ws, name); //accept strings with spaces and eleminate whitespaces or new line characters

    std::cout<<"Hello, "<<name<<", You are "<<age<<" years old";

    return 0;
}