#include<stdio.h>

int main() {
    int n,i,min=110,max=0,mp,mnp,count;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    for(i=0;i<n;i++) {
        if(ara[i]>max) {
            mp=i+1;
            max=ara[i];
        }
    }
    for(i=n-1;i>=0;i--) {
        if(ara[i]<min) {
            mnp=i+1;
            min=ara[i];
        }
    }
    if(mp<mnp) {
        count=(mp-1)+(n-mnp);
        printf("%d\n",count);
    }
    else if(max>min) {
        count=(mp-1)+(n-mnp-1);
        printf("%d\n",count);
    }

    return 0;
}
