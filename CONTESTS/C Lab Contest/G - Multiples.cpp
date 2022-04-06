#include<stdio.h>

int main(){
    int tc,t,x,n;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d %d",&x,&n);
        printf("Case %d: ",t);
        int temp=x;
        for(;temp<=n;temp+=x){
            if(temp%x==0) printf("%d ",temp);
        }
        printf("\n");
    }
    return 0;
}
