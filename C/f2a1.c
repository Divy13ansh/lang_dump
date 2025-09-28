#include <stdio.h>
void main(){
    void input (int[3][3]);
    void disp (int[3][3]);
    int a[3][3],b[3][3],c[3][3];
    input(a);
    disp(a);
    input(b);
    disp(b);
    input(c);
    disp(c);
}
void input(int z[3][3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element");
            scanf("%d",&z[r][c]);
        }
    }
}
void disp(int z[3][3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("%d\t",z[r][c]);
        }
        printf("\n");
    }
}
