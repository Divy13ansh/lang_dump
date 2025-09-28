#include <stdio.h>
void main(){
    char a[100],b[100],c[200],*p1,*p2,*p3;
    int i,j,k;
    p1=a;
    p2=b;
    p3=c;
    printf("Enter string: ");
    scanf("%s",p1);
    printf("Enter string: ");
    scanf("%s",p2);
    k=0;
    c[k]='*';
    k++;
    for(i=0;*(p1+i)!= '\0';i++){}
    i--;
    for(;i>=0;i--,k++){
        *(p3+k)=*(p1+i);
    }
    *(p3+k)='*';
    k++;
    for(j=0;*(p2+j)!='\0';j++){}
    j--;
    for(;j>=0;j--,k++){
        *(p3+k)=*(p2+j);
    }
    *(p3+k)='*';
    k++;
    *(p3+k)='\0';
    printf("%s",c);
}

