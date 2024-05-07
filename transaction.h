// transaction.h
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"
#include <string>

class Transaction {
private:
    std::string type;
    double amount;
    Account* account;

public:
    Transaction(const std::string& type, double amount, Account* account);
    std::string getType() const;
    double getAmount() const;
    Account* getAccount() const;
};

#endif // TRANSACTION_H
