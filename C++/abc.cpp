#include <iostream>


using namespace std;


class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};


class Employee : AbstractEmployee
{
private:
    string company;
    int age;
protected:
    string name;


public:
    Employee(string na, string com, int a)
    {
        name = na;
        company = com;
        age = a;
    }
    void AskForPromotion()
    {
        if (age > 30)
            cout << name << "got promoted\n";
        else
            cout << name << "not promoted\n";
    }


    void Work()
    {
        cout << name << " is checking email, task backlog, performing tasks ..";
    }
};


class Developer : public Employee
{
public:
    string fav;
    Developer(string na, string com, int a, string fa) : Employee(na, com, a)
    {
        fav = fa;
    }
    void fixedBug()
    {
        cout << name << "fixed using " << fav;
    }
    void Work()
    {
        cout << name << " is writing"<<fav<<endl;
    }
};


class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << name << " is preparing " << Subject << " lesson" << std ::endl;
    }
Teacher(string na, string com, int a, string sub) : Employee(na, com,a) {
        Subject=sub;
    }
    void Work()
    {
        cout << name << " is teaching"<<Subject<<endl;
    }


};


int main()
{
    Developer d1("N1", "Hi", 56, "c++");
    Teacher t1("N11", "Hi1", 59, "Java");
    Employee *e1 = &d1;
    Employee *e2 = &t1;
	//Employee *e3 = new t2("N22", "Hi2", 78, "Java");


    e1->Work(); //N1 is checking email, task backlog, performing tasks 
    e2->Work(); //N11 is checking email, task backlog, performing tasks 
}

