#include <stdio.h>
void main(){
int i,a,e,o,so,se;
i = 1;
e = 0;
o = 0;
so = 0;
se = 0;

while(i <= 10){
    printf("Enter any no.");
    scanf("%d", &a);
    if(a % 2 == 0){
        se = se + a;
    }
    else{
        so = so + a;
    }
    i = i + 1;
}
printf("odd %d \n", so);
printf("even %d \n", se);
}
