#include<iostream>

int main() {

    int students = 20;

    int students_add = students + 2;
    int students_subtract = students - 1;
    int students_multiply = students * 2;
    int students_divide = students / 2;
    int students_mod = students % 2;

    std::cout<<students_add<<"\t"<<students_subtract<<"\t"<<students_multiply<<"\t"<<students_divide<<"\t"<<students_mod<<"\n";

    return 0;
}