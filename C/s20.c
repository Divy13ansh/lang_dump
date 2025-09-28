#include <stdio.h>
void main(){
    char a[100];
    int i,j,s,b;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    printf("Enter char: ");
    scanf("%d",b);
    for(i=0,s=0;a[i]!='\0';i++){
                if(a[i] == b){
                    s=s+1;
                }
            }
                printf("frequency of %c is %d\n",b,s);
            }



