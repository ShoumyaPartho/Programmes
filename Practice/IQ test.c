#include<stdio.h>

int main() {
    int n,i,e=0,o=0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    for(i=0;i<n;i++) {
        if(ara[i]%2==0) e++;
        else if(ara[i]%2==1) o++;
    }
    if(e>o) {
        for(i=0;i<n;i++) {
            if(ara[i]%2==1) {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    else if(e<o) {
        for(i=0;i<n;i++) {
            if(ara[i]%2==0) {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
