//string 3
#include<stdio.h>
void main(){
    char a[100],*p;
    int i;
    p=a;
    printf("Enter any string: ");
    scanf("%s",p);
    for(i=0;*(p+i)!='\0';i++){
    if(*(p+i)>=65&&*(p+i)<=90){
        *(p+i)=*(p+i)+32;
    }
    else 'if(*(p+i)>=97&&*(p+i)<=122){
        *(p+i)=*(p+i)-32;
    }
    }
        printf("%s",p);
}



