#include<iostream>
#include<iomanip>

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {

    double balance = 0;
    int choice = 0;

    do {
        std::cout<<"******************\n";
        std::cout<<"Enter your choice:\n";
        std::cout<<"******************\n";
        std::cout<<"1. Deposit money\n";
        std::cout<<"2. Withdraw money\n";
        std::cout<<"3. Show Balance\n";
        std::cout<<"4. Exit\n";

        std::cin>>choice;

        switch(choice) {
            case 1: balance += deposit(balance);
            showBalance(balance);
            break;

            case 2: balance -= withdraw(balance);
            showBalance(balance);
            break;

            case 3:showBalance(balance);
            break;

            case 4: std::cout<<"Thanks for visiting\n";
            break;

            default: std::cout<<"Select correct choice\n";
        }
    } while(choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout<<"Your current balance is: $"<<std::setprecision(2)<<std::fixed<<balance<<"\n";
}
double deposit(double balance) {
    double amount = 0;
    std::cout<<"Your current balance is: $"<<std::setprecision(2)<<std::fixed<<balance<<"\n";
    std::cout<<"Enter amount to be deposited: ";
    std::cin>>amount;

    if(amount > 0) {
        return amount;
    } else {
        std::cout<<"That's not a valid amount\n";
        return 0;
    }
}
double withdraw(double balance) {
    double amount = 0;
    std::cout<<"Your current balance is: $"<<std::setprecision(2)<<std::fixed<<balance<<"\n";
    std::cout<<"Enter amount to be withdrawn: ";
    std::cin>>amount;

    if(amount > balance) {
        std::cout<<"Not enough money to withdraw\n";
    } else {
        return amount;
    }
}