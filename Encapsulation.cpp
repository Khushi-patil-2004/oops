#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;
    int accountNumber;
    double balance;

public:
    Customer(string cname, int accNo, double bal) {
        name = cname;
        accountNumber = accNo;
        balance = bal;
    }

    // Getter for name (read-only access)
    string getName() const {
        return name;
    }

    // Getter for account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Public method to modify balance
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
    }
};

class Bank {
public:
    void showCustomerDetails(const Customer& cust) {
        cout << "Customer Name: " << cust.getName() << endl;
        cout << "Account Number: " << cust.getAccountNumber() << endl;
        cout << "Balance: ₹" << cust.getBalance() << endl;
    }

    void processDeposit(Customer& cust, double amount) {
        cust.deposit(amount);
        cout << "₹" << amount << " deposited." << endl;
    }

    void processWithdrawal(Customer& cust, double amount) {
        cust.withdraw(amount);
        cout << "₹" << amount << " withdrawn." << endl;
    }
};

int main() {
    Customer c1("XYZ", 1001, 8000.0);
    Bank b;

    b.showCustomerDetails(c1);
    b.processDeposit(c1, 2000.0);
    b.processWithdrawal(c1, 1000.0);
    b.showCustomerDetails(c1);

    return 0;
}
