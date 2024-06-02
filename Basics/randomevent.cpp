#include<iostream>
#include<ctime>

int main() {

    srand(time(NULL));
    int randNum = rand() % 5 + 1;

    switch(randNum) {
        case 1: std::cout<<"You won Maruti Suzuki Alto";
                break;
        case 2: std::cout<<"You won Hyundai i20";
                break;
        case 3: std::cout<<"You won Skoda Slavia";
                break;
        case 4: std::cout<<"You won Tata Harrier";
                break;
        case 5: std::cout<<"You won Toyota Fortuner";
                break;
    }

    return 0;
}