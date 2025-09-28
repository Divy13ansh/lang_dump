//right
#include <stdio.h>
void main(){
    void right(char []);
    char n[100];
    printf("Enter any string: ");
    scanf("%s",n);
    right(n);
}
void right(char n[]){
    int i,l;
    for(i=0;n[i]!='\0';i++){
    }
    l=i;
    for(;i>l-3;i--){
    }
    for(;n[i]!='\0';i++){
        printf("%c",n[i]);
    }
}
