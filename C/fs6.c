//lower
#include <stdio.h>
void main(){
    void lower(char []);
    char n[100];
    printf("Enter any string: ");
    scanf("%s",n);
    lower(n);

}
void lower(char n[]){
    int i;
    for(i=0;n[i]!='\0';i++){
        if(n[i]>=65&&n[i]<=90)
            n[i]=n[i]+32;
        printf("%c",n[i]);
    }
}

