#include<stdio.h>

int main(){
    int tc,t,a,b,c,i,j,k;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d %d %d",&a,&b,&c);
        printf("Case %d:\n",t);

        for(i=0;i<=a;i++){
            for(j=i+1;j<=b;j++){
                for(k=j+1;k<=c;k++) printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}
