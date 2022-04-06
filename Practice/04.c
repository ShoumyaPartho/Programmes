#include<stdio.h>

int main(){
    int tc,n,i,j;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++){
        scanf("%d",&n);
        printf("Case %d:",i);
        for(j=1;j<=n;j++){
            if(n%j==0) printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}
