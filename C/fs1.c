#include <stdio.h>
void main(){
    int length(char []);
    int l;
    char n[100];
    printf("Enter any string");
    scanf("%s",n);
    l=length(n);
    printf("%d",l);
}
int length(char n[]){
    int i;
    for(i=0;n[i]!='\0';i++){
    }
    return i;
}
