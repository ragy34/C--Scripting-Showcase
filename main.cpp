#include <iostream>
#include "Account.h"

int main() {
    Account account("John Doe", 1000);

    std::cout << "Account Holder: " << account.getAccountHolder() << std::endl;
    std::cout << "Current Balance: $" << account.getBalance() << std::endl;

    account.deposit(500);
    std::cout << "After deposit, Balance: $" << account.getBalance() << std::endl;

    account.withdraw(300);
    std::cout << "After withdrawal, Balance: $" << account.getBalance() << std::endl;

    account.withdraw(2000); // Attempt to overdraw
    return 0;
}
