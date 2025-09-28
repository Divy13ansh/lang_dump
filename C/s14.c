#include <stdio.h>
void main(){
    char a[100];
    int i,j,s;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++){
            for(s=0,j=0;a[j]!='\0';j++){
                if(a[i] == a[j]){
                    s=s+1;
                }
            }
            printf("frequency of %c is %d\n",a[i], s);
                }
            }
