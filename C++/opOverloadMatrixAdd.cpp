#include<iostream>
using namespace std;

class Matrix{
    private:
        int mat[3][3];
    public:
        Matrix(){
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    cin>>mat[i][j];
                }
            }
        }
        friend void operator+(Matrix m1, Matrix m2);
        friend void operator-(Matrix m1, Matrix m2);

};
void operator+(Matrix m1, Matrix m2){
    
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<m1.mat[i][j]+m2.mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void operator-(Matrix m1, Matrix m2){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<m1.mat[i][j]-m2.mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    Matrix m1;
    Matrix m2;
    m1+m2;
    m1-m2;
}