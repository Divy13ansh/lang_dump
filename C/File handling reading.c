#include <stdio.h>
void main(){
FILE *p;
char n[20],c;
printf("Enter file name you want to read: ");
scanf("%s",n);
p=fopen(n,"r");
if (p == NULL){
    printf("File can't be opened");
        exit(0);
}
while((c=fgetc(p))!=EOF){
    printf("%c",c);
}
fclose(p);
}
