//left
#include <stdio.h>
void main(){
    void left(char []);
    int l;
    char n[100];
    printf("Enter any string: ");
    scanf("%s",n);
    left(n);
}
void left(char n[]){
    int i;
    for(i=0;i<=2;i++){
            printf("%c",n[i]);
    }
}

