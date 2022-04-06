#include<stdio.h>

int main() {
    int t,n,m,r1,r2,rt,res;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&n, &m);
        r1=0;
        while(n) {
            r1=r1*10;
            r1=r1+(n%10);
            n=n/10;
        }
        r2=0;
        while(m) {
            r2=r2*10;
            r2=r2+(m%10);
            m=m/10;
        }
        rt=r1+r2;
        res=0;
        while(rt) {
            res=res*10;
            res=res+(rt%10);
            rt=rt/10;
        }
        printf("%d\n",res);
    }
    return 0;
}
