#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int ara[n],i,s=0;
    double res;
    for(i=0;i<n;i++) {
        scanf("%d",&ara[i]);
        s+=ara[i];
    }
    res=(double) s/n;
    printf("%0.12f\n",res);
    return 0;
}
