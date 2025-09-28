#include<iostream>
using namespace std;

class Student{
    int marks;
    static int passingMarks;
    int f = 0;
    public:
        Student(int marks){
            this->marks = marks;
        }
        static void setPassingMarks(int marks){
            passingMarks = marks;
        }
        void checkPass(){
            cout<<"Marks: "<< marks<<"\t";
            if(marks>passingMarks){
                cout<<"Status: "<<"Pass\n";
            }
            else{
                cout<<"Status: "<<"Failed\n";
            }
        }
};

int Student::passingMarks = 0;

int main(){
    Student s1(85);
    Student s2(40);
    Student::setPassingMarks(50);
    s1.checkPass();
    s2.checkPass();
}