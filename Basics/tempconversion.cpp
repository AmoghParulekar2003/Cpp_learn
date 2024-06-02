#include<iostream>

int main() {

    double temp, result;
    char unit1, unit2;

    std::cout<<"*****TEMPERATURE CONVERTOR*****\n";
    std::cout<<"F/f = Fahrenheit\nC/c = Celsius\nK/k - Kelvin\n";
    std::cout<<"Enter the temperature: ";
    std::cin>>temp;
    std::cout<<"Enter the unit of your temperature: ";
    std::cin>>unit1;
    std::cout<<"Enter the unit of temperature to convert to: ";
    std::cin>>unit2;

    if(unit1 == 'F' || unit1 == 'f') {

        if(unit2 == 'C' || unit2 == 'c') {

            result = (temp - 32) * 5 / 9;
            std::cout<<result<<"C\n"; 

        } else if(unit2 == 'K' || unit2 == 'k'){

            result = (temp - 32) / 1.8 + 273.15;
            std::cout<<result<<"K\n";

        } else {
            std::cout<<"Enter valid unit\n";
        }

    } else if(unit1 == 'C' || unit1 == 'c') {

        if(unit2 == 'F' || unit2 == 'f') {

            result = (temp * 9 / 5) + 32;
            std::cout<<result<<"F\n";

        } else if(unit2 == 'K' || unit2 == 'k'){

            result = temp + 273.15;
            std::cout<<result<<"K\n";

        } else {
            std::cout<<"Enter valid unit\n";
        }

    } else if(unit1 == 'K' || unit1 == 'k') {

        if(unit2 == 'C' || unit2 == 'c') {

            result = temp - 273.15;
            std::cout<<result<<"C\n";

        } else if(unit2 == 'F' || unit2 == 'f'){

            result = (temp * 1.8) - 459.67;

        } else {
            std::cout<<"Enter valid unit\n";
        }

    } else {
        std::cout<<"Enter valid unit\n";
    }


    std::cout<<"*********************************";
    return 0;
}