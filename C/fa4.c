#include <stdio.h>
void main(){
    void input(int[]);
    void disp(int[]);
    int sum(int[]);
    int a[5],s;
    input(a);
    disp(a);
    s=sum(a);
    printf("%d",s);
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
int sum(int z[]){
    int i,s;
    for(s=0,i=0;i<=4;i++){
        s=s+z[i];
    }
    return s;
}
