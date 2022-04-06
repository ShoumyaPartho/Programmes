#include<stdio.h>

int main() {
    int n,i,min=110,max=0,val,temp,count=0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    for(i=0;i<n;i++) {
        if(ara[i]>max) max=i;
    }
    for(i=max;i>0;i--) {
        temp=ara[i];
        ara[i]=ara[i-1];
        ara[i-1]=temp;
        count++;
    }
    for(i=n-1;i>=0;i--) {
        if(ara[i]<min) min=i;
    }
    for(i=min;i<n;i++) {
        temp=ara[i];
        ara[i]=ara[i+1];
        ara[i+1]=temp;
        count++;
    }
    printf("%d\n",count);

    return 0;
}
