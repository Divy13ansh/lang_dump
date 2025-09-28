#include<stdio.h>
void main(){
    struct Student{
        char n[20];
        int m,h,s,e,c,t;
        float p;
        char g;
    };
    int total(int,int,int,int,int);
    float per(int);
    char grade(float);
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

    z.t=total(z.m,z.h,z.e,z.s,z.c);
    printf("total is %d\n,",z.t);
    z.p=per(z.t);
    printf("per. is %f\n,",z.p);
    z.g=grade(z.p);
    printf("grade is %c\n,",z.g);
}
int total(int a,int b,int c,int d,int e){
    return(a+b+c+d+e);
}
float per(int t){
    return(t/5);
}
char grade(float z){
    if(z>80){
        z='A';
    }
    else{
        z='B';
    }
    return(z);
}

