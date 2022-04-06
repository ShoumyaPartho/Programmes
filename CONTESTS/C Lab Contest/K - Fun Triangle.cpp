#include<stdio.h>

int main(){
    int tc,t,b,h;
    scanf("%d",&tc);
    for(t=1;t<=tc;t++){
        scanf("%d %d",&b,&h);
        printf("Case %d: %d\n",t,b*h);
    }
    return 0;
}
