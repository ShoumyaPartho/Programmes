#include<stdio.h>

int main(){
    int tc,t,n,i;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d",&n);
        printf("Case %d: ",t);
        for(i=1;i<=n;i++){
            if(n%i==0) printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
