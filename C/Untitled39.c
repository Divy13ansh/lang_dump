#include <stdio.h>
void main(){
int n1,n2,a,s,z,i,n;
printf("Enter Starting no.");
scanf("%d", &n1);
printf("Enter ending no.");
scanf("%d", &n2);
for(;n1 <= n2; n1 = n1 + 1){
        for(i = 1, s = 0; i < n1; i = i +1){
            if(n1 % i == 0){
            s = s + i;
            }
        }
        if(s == n1){
            printf("Perfect %d\n", n1);
        }
}
}
