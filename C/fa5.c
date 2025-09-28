#include <stdio.h>
void main(){
    void input(int[]);
    void disp(int[]);
    void join(int[],int[],int[]);
    int a[5],b[5],c[10];
    input(a);
    input(b);
    disp(a);
    disp(b);
    join(a,b,c);
    disp(c);
}
void input(int z[]){
        int i;
        for(i=0;i<=4;i++){
            printf("Enter element");
            scanf("%d",&z[i]);
        }
}
void disp(int y[]){
    int i;
    for (i=0;i<=4;i++){
        printf("%d\n",y[i]);
    }
}
void join(int x[],int y[],int z[]){
    int i,j,k;
    for(i=0,k=0;i<=4;i++,k++){
        z[k]=x[i];
    }
    for(j=0;j<=4;j++,k++){
        z[k]=y[j];
    }
}

