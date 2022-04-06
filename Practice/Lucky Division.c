#include<stdio.h>

int main() {
    int n,i,a=0,ara[]={4,7,47,74,444,447,474,477,744,747,774,777};
    scanf("%d",&n);
    for(i=0;i<12;i++) {
        if(n%ara[i]==0) {
            a=1;
            break;
        }
    }
    if(a) printf("YES\n");
    else printf("NO\n");

    return 0;
}
