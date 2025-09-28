#include <stdio.h>
void main(){
    char a[100];
    int i,j,z;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++){
            for(j=i+1;a[j]!='\0';j++){
                if(a[i]>a[j]){
                    z=a[j];
                    a[j]=a[i];
                    a[i]=z;
                }
            }
    }
    for(i=0;a[i]!='\0';i++){
            printf("%c",a[i]);
    }
}
