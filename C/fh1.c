#include<stdio.h>
void main(){
FILE *p,*p1,*p2,*p3,*p4;
char c;
p=fopen("demo.txt","r");
if (p== NULL){
printf("File can't be opened");
exit(0);
}
p1=fopen("vowels.txt","w");
p2=fopen("cons.txt","w");
p3=fopen("digits.txt","w");
p4=fopen("sp.txt","w");
if((p1==NULL)||(p2==NULL)||(p3==NULL)||(p4==NULL)){
printf("Target files can't create");
exit(1);
}
while((c=fgetc(p))!=EOF)
    if ((c>=65&&c<=90)||(c>=97&&c<=122)){
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            fputc(c,p1);

        else
            fputc(c,p2);
    }
    else{
        if(c>=48&&c<=57)
            fputc(c,p3);
        else
            fputc(c,p4);
    }
fputc(EOF,p1);
fputc(EOF,p2);
fputc(EOF,p3);
fputc(EOF,p4);
fclose(p1);
fclose(p2);
fclose(p3);
fclose(p4);
}

