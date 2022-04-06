#include<stdio.h>
#include<stdlib.h>

int cm(const void *a, const void *b){
    return (*(int *)a-*(int*)b);
}
int main(){
    int tc,t,ara[3],res[3],i;
    scanf("%d",&tc);
    for(t=0;t<tc;t++){
        for(i=0;i<3;i++) scanf("%d",&ara[i]);
        qsort(ara,3,sizeof(int),cm);
        printf("Case %d: %d %d %d\n",t+1,ara[0],ara[1],ara[2]);
    }
    return 0;
}
