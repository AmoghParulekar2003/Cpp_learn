#include<iostream>
#include<ctime>

int main() {

    int num, guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 10) + 1;

    std::cout<<"**********NUMBER GUESSING GAME**********\n";
    do {
        std::cout<<"Enter a guess between 1 and 10: ";
        std::cin>>guess;
        tries++;
    } while(guess != num);

    std::cout<<"You guessed the number!!\n";
    std::cout<<"Your score is "<<tries;

    return 0;
}