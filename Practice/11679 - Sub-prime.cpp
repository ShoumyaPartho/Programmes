#include<stdio.h>

int main(){
    int b,n;
    while(scanf("%d %d",&b,&n)){
        if(b==0 && n==0) break;
        int ara[b+1],d,c,v,a;
        for(int i=1;i<=b;i++) scanf("%d",&ara[i]);
        for(int i=1;i<=n;i++) {
            scanf("%d %d %d",&d,&c,&v);
            ara[d]-=v;
            ara[c]+=v;
        }
        for(int i=1;i<=b;i++){
            if(ara[i]<0) {
                a=0;
                break;
            }
            else a=1;
        }
        if(a) printf("S\n");
        else printf("N\n");
    }
    return 0;
}
