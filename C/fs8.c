//title
#include <stdio.h>
void main(){
    void title(char []);
    char n[100];
    printf("Enter any string: ");
    scanf("%[^\n]",n);
    title(n);

}
void title(char n[]){
    int i,z;
    if (n[0]>=97&&n[0]<=122)
        n[0]=n[0]-32;
    for(i=0;n[i]!='\0';i++){
        if(n[i]==' '){
        if(n[i+1]>=97&&n[i+1]<=122)
            n[i+1]=n[i+1]-32;
        }
        printf("%c",n[i]);
    }
}

