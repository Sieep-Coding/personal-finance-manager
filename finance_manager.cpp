// finance_manager.cpp
#include "finance_manager.h"
#include <iostream>

FinanceManager::FinanceManager() {}

void FinanceManager::run() {
    int choice;
    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                listAccounts();
                break;
            case 3:
                performTransaction();
                break;
            case 4:
                displayTransactions();
                break;
            case 5:
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
}

void FinanceManager::displayMenu() const {
    std::cout << "\nPersonal Finance Manager\n";
    std::cout << "1. Create Account\n";
    std::cout << "2. List Accounts\n";
    std::cout << "3. Perform Transaction\n";
    std::cout << "4. Display Transactions\n";
    std::cout << "5. Exit\n";
}

void FinanceManager::createAccount() {
    std::string name;
    double balance;
    std::cout << "Enter account name: ";
    std::cin >> name;
    std::cout << "Enter initial balance: ";
    std::cin >> balance;
    accounts.push_back(Account(name, balance));
    std::cout << "Account created successfully.\n";
}

void FinanceManager::listAccounts() const {
    std::cout << "\nList of Accounts:\n";
    for (const auto& account : accounts) {
        std::cout << "Name: " << account.getName() << ", Balance: " << account.getBalance() << std::endl;
    }
}

void FinanceManager::performTransaction() {
    // Implementation of transaction functionality
}

void FinanceManager::displayTransactions() const {
    // Implementation of displaying transactions
}
