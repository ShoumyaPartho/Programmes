#include<stdio.h>

int main(){
    int tc,t,d,h,i,j,k;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d %d",&d,&h);
        printf("Case %d:\n",t);
        for(i=1,j=1;i<=h;i++,j++){
            for(k=1;k<=j;k++) printf("%d",d);
            printf("\n");
        }
    }
    return 0;
}
