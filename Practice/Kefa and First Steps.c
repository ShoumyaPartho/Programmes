#include<stdio.h>

int main() {

    int n,i,j,max=0,temp=1;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    if(n==1) max=temp;
    else{
        for(i=1;i<n;i++) {
            if(ara[i]>=ara[i-1])temp++;
            else{
                if(temp>max) max=temp;
                    temp=1;
            }
            if(temp>max) max=temp;
        }
    }
    printf("%d\n",max);

    return 0;
}
