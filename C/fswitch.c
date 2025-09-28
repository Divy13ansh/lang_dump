#include<stdio.h>
void main(){
    void input(int[3][3]);
    void disp(int[3][3]);
    void trans(int[3][3]);
    void rsum(int[3][3]);
    void csum(int[3[3]);
    void ldiag(int[3][3]);
    void rdiag(int[3][3]);
    void mirror(int][3][3]);
    int a[3][3];
    input(a);
}
void input(int z[3][3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element: ");
            scanf("%d",&z[r][c]);
        }
    }
}
void disp(int z[3][3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
                printf("%d",z[r][c]);
        }
    }
}
void trans(int z[3[3]){
    int r,c;
    for(c=0;c<=2;c++){
        for(r=0;r<=2;r++){
            printf("%d",z[r][c]);
        }
    }
}
void rsum(int z[3][3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(s=0,c=0;c<=2;c++){
            s=s+z[r][c];
        }
        printf("%d\t",z[r][c]);
    }
    printf("%d",s);
    printf("\n");
}
void csum(int z[3][3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(s=0,c=0;c<=2;c++){
            s=s+z[r][c];
        }
        printf("%d\t",z[r][c]);
        printf("\n")
    }
    for(c=0;c<=2;c+){
        for(s=0,r=0;r<=2;r++){
                s=s+z[r][c];
        }
        printf("%d\t",s);
    }
}
void ldiag(int z[3[3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
                if(r==c)
                    s=s+z[r][c];
        printf("%d\t",z[r][c]);
        }
        printf("\n");
    }
    printf("\t\t\t%d",s);
}
void rdiag(int z[3][3]){
    int r,c;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
                if(r+c==2)
                    s=s+z[r][c];
        printf("\t%d\t",z[r][c]);
        }
    printf("\n");
    }
    printf("%d",s);
}
void mirror(int z[3][3]){

}
