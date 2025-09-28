#include<iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    void get();      // To input time
    void display();  // To output time
};

void Time::get() {
    int h1;
    cin >> h1;
    this->h = h1;
}

void Time::display() {
    cout << "Hours: " << h << endl;
}

int main() {
    Time t1;
    t1.get();
    t1.display();
    return 0;
}