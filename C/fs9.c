//encrypt
#include <stdio.h>
void main(){
    void enc(char []);
    char n[100];
    printf("Enter any string: ");
    scanf("%s",n);
    enc(n);
}
void enc(char n[]){
    int i;
    for(i=0;n[i]!='\0';i++){
        n[i]=n[i]+1;
        printf("%c",n[i]);
    }
}
