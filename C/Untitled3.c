#include <stdio.h>
void main(){
int i,a,e,o;
i = 1;
e = 0;
o = 0;
while(i <= 10){
    printf("Enter any no.");
    scanf("%d", &a);
    if(a % 2 == 0){
        e = e + 1;
    }
    else{
        o = o + 1;
    }
    i = i + 1;
}
printf("Odd %d \n", o);
printf("even %d", e);

}
