#include<stdio.h>

int main(){
    int tc,t,a,b,c;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d %d %d",&a,&b,&c);
        printf("Case %d: Sum of %d, %d and %d is %d\n",t,a,b,c,a+b+c);
    }
    return 0;
}
