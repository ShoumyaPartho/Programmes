#include <stdio.h>

int main() {

    int n,j=0;

    while((scanf("%d",&n))) {
        if(n==0)    break;
        j++;
        int a[n],s1=0,s2=0;

        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            if(a[i]!=0)    s1++;
            else if(a[i]==0)  s2++;
        }
        printf("Case %d: %d\n",j,s1-s2);
    }
    return 0;
}
