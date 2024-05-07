// account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string name;
    double balance;

public:
    Account(const std::string& name, double balance);
    std::string getName() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // ACCOUNT_H
