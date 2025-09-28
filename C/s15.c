#include <stdio.h>
void main(){
    char a[100];
    int i,j,sv,sc,sd,ss;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(i=0,sv=0,sc=0,sd=0,ss=0;a[i]!='\0';i++){
        if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
            if(a[i]==65||a[i]==69||a[i]==73||a[i]==79||a[i]==85||a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117)
                sv=sv+1;
            else
                sc=sc+1;
        }
        else if(a[i]>=48&&a[i]<=57)
            sd=sd+1;

        else if((a[i]>=32&&a[i]<=47)||(a[i]>=58&&a[i]<=64)||(a[i]>=91&&a[i]<=96)||(a[i]>=123&&a[i]<=126))
            ss=ss+1;
    }
    printf("no. of vowels are %d\n",sv);
    printf("no. of consonants are %d\n",sc);
    printf("no. of digits are %d\n",sd);
    printf("no. of special characters are %d\n",ss);
}
