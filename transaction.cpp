// transaction.cpp
#include "transaction.h"

Transaction::Transaction(const std::string& type, double amount, Account* account) : type(type), amount(amount), account(account) {}

std::string Transaction::getType() const {
    return type;
}

double Transaction::getAmount() const {
    return amount;
}

Account* Transaction::getAccount() const {
    return account;
}
