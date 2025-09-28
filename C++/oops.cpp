// #include<iostream>
// using namespace std;
// class Employee{
//         string name,role;
//         int age;
//     public:
//         void introduceYourself(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Age: "<<age<<endl;
//         }

//         Employee(string a, string b, int c){
//             name = a;
//             role = b;
//             age = c;
//         }
//         void setName(string n){
//             if(role == "manager"){
//                 name = n;
//             }
//             else{
//                 cout<<"You don't have access"<<endl;
//             }
//         }

//         string getName(){
//             return name;
//         }
// };
// int main(){
//     Employee e1("abc","peon",13);
//     e1.introduceYourself();
//     e1.setName("adg");
//     e1.introduceYourself();

//     Employee e2("abc","manager",13);
//     e2.introduceYourself();
//     e2.setName("adg");
//     e2.introduceYourself();
//     cout<<e2.getName();
// }


#include<iostream>
using namespace std;
class Employee{
    string name, role;
    int age;

    int multiply(int a, int b){
        return a*b;
    }

    int add(int a, int b){
        return a+b;
    }

    public:
        Employee(int a, int b, char c){
            if(c == '+'){
                cout<< add(a,b);
            }
            else if(c== '*'){
                cout<< multiply(a,b);
            }
        }
};
int main(){
    Employee e1(1,5,'+');
}
