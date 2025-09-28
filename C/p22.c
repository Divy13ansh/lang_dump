#include<stdio.h>
void main(){
    char a[100],b[100],c[200];
    int i,k,j;
    printf("enter string");
    scanf("%s",a);
    printf("enter another string");
    scanf("%s",b);
    k=0;
    c[k]='*';
    k++;
    for(i=0;a[i]!='\0';i++){}
    i--;

    for(;i>=0;i--,k++){
            c[k]=a[i];
    }

    c[k]='*';
    k++;
    for(j=0;b[j]!='\0';j++){}
    j--;
    for(;j>=0;j--,k++){
            c[k]=b[j];
    }
    k++;
   c[k]='\0';

    printf("%s",c);

}
