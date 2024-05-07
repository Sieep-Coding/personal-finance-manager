// account.cpp
#include "account.h"
#include <iostream>

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
        std::cout << "Insufficient funds!\n";
        return;
    }
    balance -= amount;
}

void Account::addTransaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

void Account::displayTransactions() const {
    std::cout << "Transactions for account '" << name << "':\n";
    for (const auto& transaction : transactions) {
        std::cout << "Type: " << transaction.getType() << ", Amount: " << transaction.getAmount() << std::endl;
    }
}
