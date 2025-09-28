#include<stdio.h>
void main(){
    struct Student{
        char n[20];
        int m,h,s,e,c,t;
        float p;
        char g;
    };
    struct Student z,y,x;
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
    z.t=z.m+z.h+z.e+z.s+z.c;
    z.p=z.t/5;
    if(z.p>80){
        z.g='A';
    }
    else{
        z.g='B';
    }
    printf("total is %d\n,",z.t);
    printf("per. is %f\n,",z.p);
    printf("grade is %c\n,",z.g);

    printf("name of student");
    scanf("%s",y.n);
    printf("enter marks of maths");
    scanf("%d",&y.m);
    printf("enter marks of hindi");
    scanf("%d",&y.h);
    printf("enter marks of english");
    scanf("%d",&y.e);
    printf("enter marks of science");
    scanf("%d",&y.s);
    printf("enter marks of computer");
    scanf("%d",&y.c);
    y.t=y.m+y.h+y.e+y.s+y.c;
    y.p=y.t/5;
    if(y.p>80){
        y.g='A';
    }
    else{
        y.g='B';
    }
    printf("total is %d\n,",y.t);
    printf("per. is %f\n,",y.p);
    printf("grade is %c\n,",y.g);

    printf("name of student");
    scanf("%s",x.n);
    printf("enter marks of maths");
    scanf("%d",&x.m);
    printf("enter marks of hindi");
    scanf("%d",&x.h);
    printf("enter marks of english");
    scanf("%d",&x.e);
    printf("enter marks of science");
    scanf("%d",&x.s);
    printf("enter marks of computer");
    scanf("%d",&x.c);
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
