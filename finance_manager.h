// finance_manager.h
#ifndef FINANCE_MANAGER_H
#define FINANCE_MANAGER_H

#include "account.h"
#include "transaction.h"
#include <vector>

class FinanceManager {
private:
    std::vector<Account> accounts;
    std::vector<Transaction> transactions;

public:
    FinanceManager();
    void run();
    void displayMenu() const;
    void createAccount();
    void listAccounts() const;
    void performTransaction();
    void displayTransactions() const;
};

#endif // FINANCE_MANAGER_H
