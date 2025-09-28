//string 1
#include<stdio.h>
void main(){
    char a[100],*p;
    int i;
    p=a;
    printf("Enter any string: ");
    scanf("%s",p);

    for(i=0;*(p+i)!='\0';i++){}
    printf("%d",i);
}

