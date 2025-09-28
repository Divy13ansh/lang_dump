#include<iostream>
using namespace std;

class BankAccount{
    int balance;
    static int interestRate;
    public:
        BankAccount(int bal){
            balance = bal;
        }
        void deposit(int amt){
            balance+=amt;
        }
        void withdraw(int amt){
            balance-=amt;
        }
        static void setInterestRate(int interest){
            interestRate = interest;
        }
        void showBalance(){
            cout<<"account balance: "<<balance<<"\t"<<"Interest Rate: "<< interestRate<<"\n";
        }
};

int BankAccount::interestRate = 0;

int main(){
    BankAccount acc1(1000);
    BankAccount acc2(2000);
    acc1.deposit(500);
    acc2.deposit(1000);
    BankAccount::setInterestRate(5.0);
    acc1.showBalance();
    acc2.showBalance();
}