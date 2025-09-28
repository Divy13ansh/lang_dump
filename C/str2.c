#include<stdio.h>
void main(){
    struct Student{
        char n[20];
        int m,h,s,e,c,t;
        float p;
        char g;
    };
    struct Student z[3];
    int i;
    for(i=0;i<=2;i++){
        printf("name of student");
        scanf("%s",z[i].n);
        printf("enter marks of maths");
        scanf("%d",&z[i].m);
        printf("enter marks of hindi");
        scanf("%d",&z[i].h);
        printf("enter marks of english");
        scanf("%d",&z[i].e);
        printf("enter marks of science");
        scanf("%d",&z[i].s);
        printf("enter marks of computer");
        scanf("%d",&z[i].c);
        z[i].t=z[i].m+z[i].h+z[i].e+z[i].s+z[i].c;
        z[i].p=z[i].t/5;
        if(z[i].p>80){
            z[i].g='A';
        }
        else{
            z[i].g='B';
        }
        printf("total is %d\n,",z[i].t);
        printf("per. is %f\n,",z[i].p);
        printf("grade is %c\n,",z[i].g);
    }
}
