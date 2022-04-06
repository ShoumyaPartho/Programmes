#include<cstdio>

int main(){
    int n,k,cnt=0,temp;
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if((5-temp)>=k) cnt++;
    }
    printf("%d\n",cnt/3);

    return 0;
}
