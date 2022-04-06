#include<stdio.h>
#include<math.h>

int main() {
    int t,n,s1,temp,res;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        temp=n/6;
        res=sqrt(temp);
        printf("%d\n",res);
    }

    return 0;
}
