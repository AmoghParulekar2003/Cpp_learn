#include<iostream>

int main() {

    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    std::string cars[3];

    cars[0] = "Slavia";
    cars[1] = "Harrier";
    cars[2] = "Fortuner";

    std::cout<<cars[0]<<"\n";
    std::cout<<cars[1]<<"\n";
    std::cout<<cars[2]<<"\n";

    return 0;
}