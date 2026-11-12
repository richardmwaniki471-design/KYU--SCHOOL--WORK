#include <iostream>
using namespace std;

//Base class
class AccountHolder{
protected :
    string name;


    public :
        //constructor
    AccountHolder(string n){
    name=n;}
    void setName(string n)
    {name=n;}
    string getName(){
    return name;}

    };

    //derived class
    class BankAccount:public AccountHolder{
        private :
          int accountNumber;
          double balance;

        public :
          bankAccount(string n, int acc, double bal):AccountHolder(n){
         accountNumber=acc;
         balance=bal;}

        int getAccountNumber(){
         return accountNumber;}

        double getBalance(){return balance;}

         };
         //Another Derived class
         class savingAccount:public BankAccount{
     private:
        double interestRate;

        public :
            //constructor
        savingAccount(string n,int acc, double bal, double intr):BankAccount(n,acc,bal){
        intr=interestRate;}

        double getinterestRate(){
        return interesrRate;}

        };

        int main()
{
    SavingAccount s1("Richard", 12345, 50000.0, 5.5);

    cout << "Account Holder: " << s1.getName() << endl;
    cout << "Account Number: " << s1.getAccountNumber() << endl;
    cout << "Balance: " << s1.getBalance() << endl;
    cout << "Interest Rate: " << s1.getInterestRate() << "%" << endl;

    return 0;
}

