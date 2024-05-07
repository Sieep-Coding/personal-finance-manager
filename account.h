// account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "transaction.h"

class Account {
private:
    std::string name;
    double balance;
    std::vector<Transaction> transactions; // Keep track of account transactions

public:
    Account(const std::string& name, double balance);
    std::string getName() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
    void addTransaction(const Transaction& transaction);
    void displayTransactions() const;
};

#endif // ACCOUNT_H
