#include<iostream>
using namespace std;
class C1 {
    int t = 10;
    protected:
    int i = 90;
    friend class C2;
};

class C2{
    public:
    void abc(C1 f){
        cout<<f.t<<endl<<f.i;
    }
};

int main(){
    C1 s;
    C2 q;
    q.abc(s);
}
