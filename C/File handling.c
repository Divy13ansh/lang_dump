#include<stdio.h>
void main(){
    FILE *p;
    char n[20],c;
        printf("enter file name to write:=");
        scanf("%s",n);
        //p=fopen('Abc.txt','w');
        p=fopen(n,"w");
        if (p==NULL){
            printf("jjfjdjdd");
            exit(0);
        }
        printf("enter * to stop ");

        scanf("%c",&c);
        while (c!='*'){
            fputc(c,p);
            scanf("%c",&c);
        }
        fputc(EOF,p);
        printf("files saved");
        fclose(p);
}
