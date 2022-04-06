#include <stdio.h>

int main() {

    int n,f,s,a,b,c;

    while(scanf("%d",&n)!=EOF) {
        while(n--) {
            scanf("%d",&f);
            s=0;
            while(f--) {
                scanf("%d %d %d",&a,&b,&c);
                s+=(a*c);
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
