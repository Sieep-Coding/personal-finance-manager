// account.cpp
#include "account.h"

Account::Account(const std::string& name, double balance) : name(name), balance(balance) {}

std::string Account::getName() const {
    return name;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount > balance) {
        // Handle insufficient funds
        return;
    }
    balance -= amount;
}
