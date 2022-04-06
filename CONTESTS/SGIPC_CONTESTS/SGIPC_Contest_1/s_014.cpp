#include <stdio.h>

int main() {

    int n,b,h,w;

    while(scanf("%d %d %d %d",&n,&b,&h,&w)==4) {
        int ha[h],wa[w],s1,s=b+1;

        for(int i=0;i<h;i++) {
            scanf("%d",&ha[i]);
            for(int j=0;j<w;j++) {
                scanf("%d",&wa[j]);
            }
            if((ha[i]*n)<=b) {
                for (int j=0;j<w;j++) {
                    if(wa[j]>=n)    s1=1;
                    else    break;
                    if(s1) {
                        if(s1<s)    s=ha[i]*n;
                    }
                }
            }
            else if(ha[i]==h-1) s=0;
        }
        if(s==(b+1)) printf("stay home\n");
        else if(s) printf("%d\n",s);
    }
    return 0;
}
