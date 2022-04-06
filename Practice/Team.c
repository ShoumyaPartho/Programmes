#include<stdio.h>

int main() {

    int t,a[3],i,count,res=0;
    scanf("%d",&t);
    while (t--) {
        count=0;
        for(i=0;i<3;i++) {
            scanf("%d",&a[i]);
            if(a[i]==1) count++;
        }
        if(count>=2) res++;
    }
    printf("%d\n",res);

    return 0;
}
