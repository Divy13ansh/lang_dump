#include <stdio.h>
void main(){
int n1,n2,a,s,z,r;
printf("Enter Starting no.");
scanf("%d", &n1);
printf("Enter ending no.");
scanf("%d", &n2);
for(;n1 <= n2; n1 = n1 + 1){
    for(s = 0, z = n1; z > 0;){
        r = z % 10;
        s = s + r * r * r;
        z = z / 10;
    }
        if(s == n1)
            printf("Armstrong %d\n", n1);
    }

}

