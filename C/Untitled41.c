// input any no. and display these choices to user
//1 == Hello 2 == Hi 3 How are you 4 == bye
#include <stdio.h>
void main(){
    int n;
    printf("Enter any no.");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("Hi");
            break;
        case 3:
            printf("How are you");
            break;
        default:
            printf("Bye");


    }

}
