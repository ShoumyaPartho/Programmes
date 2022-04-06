#include<stdio.h>
int main() {

    int x,b,a,i,ma,mb,hudai=1;
    scanf("%d %d %d",&x,&b,&a);
    ma=a,mb=b;
    int ara[x];
    for(i=0;i<x;i++) scanf("%d",&ara[i]);
    for(i=0;i<x;i++) {
        if(ara[i]==0 && a) a--;
        else if(ara[i]==0 && b) b--;

        if(ara[i]==1 && b && a<ma) {
            b--;
            if(a+1<=ma)a++;
        }
        else if(ara[i]==1 && a && a==ma) a--;
        else if(ara[i]==1 && a && !b) a--;

        if(!a && !b) {
            hudai=0;
            break;
        }
    }
    if(!hudai) printf("%d\n",i+1);
    else if(hudai) printf("%d\n",i);

    return 0;
}
