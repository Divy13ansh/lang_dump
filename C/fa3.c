#include <stdio.h>
void main(){
    void input(int[]);
    void disp(int[]);
    int a[5],b[5],c[5];
    input(a);
    input(b);
    input(c);
    disp(a);
    disp(b);
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

