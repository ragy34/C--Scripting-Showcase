#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    std::string accountHolder;
    double balance;

public:
    Account(std::string name, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    std::string getAccountHolder() const;
};

#endif
