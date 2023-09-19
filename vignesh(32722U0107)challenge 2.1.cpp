#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(std::string accNumber, std::string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        accountBalance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " successfully.\n";
        } else {
            std::cout << "Invalid deposit amount. Amount must be positive.\n";
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully.\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Holder Name: " << accountHolderName << "\n";
        std::cout << "Account Balance: $" << accountBalance << "\n";
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("123456789", "John Doe", 1000.0);

    // Deposit and display balance
    myAccount.deposit(500.0);
    myAccount.displayBalance();

    // Withdraw and display balance
    myAccount.withdraw(200.0);
    myAccount.displayBalance();

    return 0;
}
