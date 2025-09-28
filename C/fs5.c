//upper
#include <stdio.h>
void main(){
    void upper(char []);
    char n[100];
    printf("Enter any string: ");
    scanf("%s",n);
    upper(n);

}
void upper(char n[]){
    int i;
    for(i=0;n[i]!='\0';i++){
        if(n[i]>=97&&n[i]<=122)
            n[i]=n[i]-32;
        printf("%c",n[i]);
    }
}
