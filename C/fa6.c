#include <stdio.h>
void main(){
    void input(int[],int);
    void disp(int[],int);
    void join(int[],int[],int[],int,int);
    int a[100],b[100],c[200],m,n;
    printf("No. of elements in 1st array: ");
    scanf("%d",&m);
    printf("No. of elements in 2nd array: ");
    scanf("%d",&n);
    input(a,m);
    disp(a,m);
    input(b,n);
    disp(b,n);
    join(a,b,c,m,n);
    disp(c,m+n);
}
void input(int z[],int l){
        int i;
        for(i=0;i<l;i++){
            printf("Enter element");
            scanf("%d",&z[i]);
        }
}
void disp(int y[],int l){
    int i;
    for (i=0;i<l;i++){
        printf("%d\n",y[i]);
    }
}
void join(int x[],int y[],int z[],int m, int n){
    int i,j,k;
    for(i=0,k=0;i<m;i++,k++){
        z[k]=x[i];
    }
    for(j=0;j<n;j++,k++){
        z[k]=y[j];
    }
}


