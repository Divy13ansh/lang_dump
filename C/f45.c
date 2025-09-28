//table
#include <stdio.h>
void main(){
        void tab(int);
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        tab(n);
}
void tab(int n){
int t,s;
for(t=1;t<=10;){
        s=n*t;
        printf("%d\n",s);
        t++;
}
}

