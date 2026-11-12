#include <iostream>
#include <string>
using namespace std;

// Base Class
class Customer {
protected:
    string name;

public:
    Customer(string n = "") {
        name = n;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived Class: Loan
class Loan : public Customer {
private:
    double loanAmount;
    double interestRate;

public:
    Loan(string n, double amount, double rate)
        : Customer(n) {
        loanAmount = amount;
        interestRate = rate;
    }

    double getLoanAmount() {
        return loanAmount;
    }

    double getInterestRate() {
        return interestRate;
    }
};

// Derived Class: HomeLoan
class HomeLoan : public Loan {
private:
    double propertyValue;

public:
    HomeLoan(string n, double amount, double rate, double value)
        : Loan(n, amount, rate) {
        propertyValue = value;
    }

    double getPropertyValue() {
        return propertyValue;
    }
};

// Main Function
int main() {
    HomeLoan customer("John Smith", 500000, 8.5, 750000);

    cout << "Customer Name: " << customer.getName() << endl;
    cout << "Loan Amount: " << customer.getLoanAmount() << endl;
    cout << "Interest Rate: " << customer.getInterestRate() << "%" << endl;
    cout << "Property Value: " << customer.getPropertyValue() << endl;

    return 0;
}
