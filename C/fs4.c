//substring
#include <stdio.h>
void main(){
    void sub(char [],int,int);
    int s,l;
    char n[100];
    printf("Enter any string: ");
    scanf("%s",n);
    printf("Enter starting index: ");
    scanf("%d",&s);
    printf("Enter length: ");
    scanf("%d",&l);
    sub(n,s,l);
}
void sub(char n[],int s, int l){
    int i,z;
    for(i=0;i<s;i++){}
    z=i;
    for(;i<z+l;i++){
        printf("%c",n[i]);
    }
}
