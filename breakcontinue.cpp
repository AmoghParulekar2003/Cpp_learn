#include<iostream>

int main() {

    for(int i = 1; i <= 20; i++) {
        if(i == 13) {
            break;
        } else {
            std::cout<<i<<"\n";
        }
    }

    std::cout<<"**********\n";

    for(int i = 1; i <= 20; i++) {
        if(i == 13) {
            continue;
        } else {
            std::cout<<i<<"\n";
        }
    }

    return 0;
}