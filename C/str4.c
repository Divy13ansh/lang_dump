#include<stdio.h>
struct Student{
        char n[20];
        int m,h,s,e,c,t;
        float p;
        char g;
};
void main(){
    void calc(struct Student);
    struct Student z;
    printf("name of student");
    scanf("%s",z.n);
    printf("enter marks of maths");
    scanf("%d",&z.m);
    printf("enter marks of hindi");
    scanf("%d",&z.h);
    printf("enter marks of english");
    scanf("%d",&z.e);
    printf("enter marks of science");
    scanf("%d",&z.s);
    printf("enter marks of computer");
    scanf("%d",&z.c);

    calc(z);
}
void calc(struct Student x){
    x.t=x.m+x.h+x.e+x.s+x.c;
        x.p=x.t/5;
        if(x.p>80){
            x.g='A';
        }
        else{
            x.g='B';
        }
        printf("total is %d\n,",x.t);
        printf("per. is %f\n,",x.p);
        printf("grade is %c\n,",x.g);
}
