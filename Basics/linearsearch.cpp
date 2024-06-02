#include<iostream>

int searchArray(std::string array[], int size, std::string element);

int main() {

    std::string food[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(food)/sizeof(food[0]);
    int index;
    std::string myFood;

    std::cout<<"Enter element to search for: "<<'\n';
    std::getline(std::cin, myFood);

    index = searchArray(food, size, myFood);

    if(index != -1) {
        std::cout<<"Element found at index "<<index;
    } else {
        std::cout<<"Error 404: Not found";
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element) {
    for(int i = 0; i < size; i++) {
        if(element == array[i]) {
            return i;
        }
    }
    return -1;
}