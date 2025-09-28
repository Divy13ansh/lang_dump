#include<iostream>
using namespace std;

class BankAccount{
    private:
        int accountNumber , balance;
        string accountHolder;
    public:
    BankAccount(){
        cout<<"default constructor\n";
    }
    BankAccount(int accNum, string accHolder){
        cout<<"2 params\n";
    }
    BankAccount(int accNum, string accHolder, int bal){
        cout<<"all 3 params\n";
    }
        
};
int main(){
    BankAccount b1;
    BankAccount b2(123, "hi");
    BankAccount b3(123, "hi", 100);

}