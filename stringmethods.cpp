#include<iostream>

int main() {

    std::string name;

    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12) {
        std::cout<<"Your name can't be over 12 characters\n";
    } else {
        std::cout<<"Welcome "<<name<<"\n";
    }

    if(name.empty()) {
        std::cout<<"You didn't empty your name!\n";
    } else {
        std::cout<<"Hello "<<name<<"\n";
    }

    //name.clear() = empty the string

    name.append("@gmail.com");
    std::cout<<"Your username is: "<<name<<"\n";

    std::cout<<name.at(1)<<"\n";

    name.insert(0, "a");
    std::cout<<name<<"\n";

    std::cout<<name.find('a')<<"\n";

    name.erase(0, 4);
    std::cout<<name<<"\n";

    return 0;
}