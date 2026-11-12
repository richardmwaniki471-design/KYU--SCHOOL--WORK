#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;

public:
    Person(string n = "") {
        name = n;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived Class
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books)
        : Person(n) {
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived Class
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    PremiumMember member("Ali", 1001, 4, 2500.50);

    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << member.getMembershipFee() << endl;

    return 0;
}
