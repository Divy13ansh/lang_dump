#include <stdio.h>
void main(){
    void input(int []);
    void disp(int []);
    int a[5],*p;
    p=a;
    input(a);
    disp(a);
}
void input(int p[5]){
    int i;
    for(i=0;i<=4;i++){
        printf("Enter element: ");
        scanf("%d",p+i);
    }
}
void disp(int p[5]){
    int i;
    for(i=0;i<=4;i++)
        printf("%d\t",*(p+i));
}

