#include<iostream>
using namespace std;
class AbstractEmployee{
    public:
        virtual void AskForPromotion() = 0;
};
class FullTimeEmployee : public AbstractEmployee{
    private:
        string name,company;
        int age;
    public:
        FullTimeEmployee(string na, string com, int a){
            name = na;
            company = com;
            age = a;
        }
        void AskForPromotion(){
            cout<< "inside AskForPromotion::FullTimeEmployee\n";
            if(age > 30)
                cout << name << " got promoted\n";
        }
};

class PartTimeEmployee : public AbstractEmployee{
    private:
        string name,company;
        int age;
    public:
        PartTimeEmployee(string na, string com, int a){
            name = na;
            company = com;
            age = a;
        }
        void AskForPromotion(){
            cout<< "Not Promoted\n";
        }
};

int main(){
    FullTimeEmployee e1("abc","abcd",31);
    // e1.AskForPromotion();
    PartTimeEmployee e2("Raj","amazon",23);
    // e2.AskForPromotion();

    AbstractEmployee *p1 = &e1;
    AbstractEmployee *p2 = &e2;

    p1->AskForPromotion();
    // cout<<endl;
    p2->AskForPromotion();
    

}
