#include <stdio.h>
void main(){
    void input(int[100][100],int,int);
    void disp(int[100][100],int,int);
    int a[100][100],m,n;
    printf("How many rows");
    scanf("%d",&m);
    printf("How many columns");
    scanf("%d",&n);
    input(a,m,n);
    disp(a,m,n);
}
void input(int z[100][100],int m,int n){
    int r,c;
    for(r=0;r<m;r++){
        for(c=0;c<n;c++){
            printf("Enter element: ");
            scanf("%d",&z[r][c]);
        }
    }
}
void disp(int z[100][100],int m,int n){
    int r,c;
    for(r=0;r<m;r++){
        for(c=0;c<n;c++){
            printf("%d\t",z[r][c]);
        }
        printf("\n");
    }
}
