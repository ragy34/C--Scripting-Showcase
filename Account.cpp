#include "Account.h"

Account::Account(std::string name, double initialBalance) : accountHolder(name), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

double Account::getBalance() const {
    return balance;
}

std::string Account::getAccountHolder() const {
    return accountHolder;
}
