#include<iostream>

int main() {

    // sizeof() = determines the size in bytes of a:
    //            variable, data types, class, objects, etc.

    double gpa = 2.5;
    std::string name = "Ford Shelby GT 500";
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::cout<<sizeof(gpa)<<" bytes\n";
    std::cout<<sizeof(name)<<" bytes\n";
    std::cout<<sizeof(grades)<<" bytes\n";

    return 0;
}