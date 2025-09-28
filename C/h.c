#include <stdio.h>

int main() {
	// your code goes here
    int t,i,max,n;
    scanf("%d", &t);
    for(i=0;i<=t;i++){
        printf("1");
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d", &a[j]);
        }
        max = a[0];
        for(int j=0;j<n;j++){
            if(a[j]>=max){
                max = a[j];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

