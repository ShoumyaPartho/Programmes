#include<cstdio>

int leftSoldier[100005],rightSoldier[100005];

int main(){
    int s,b,l,r;

    while(scanf("%d %d",&s,&b),s||b){
        for(int i=1;i<=s;i++){
            leftSoldier[i]=i-1;
            rightSoldier[i]=i+1;
        }
        while(b--){
            scanf("%d %d",&l,&r);

            rightSoldier[leftSoldier[l]]=rightSoldier[r];
            leftSoldier[rightSoldier[r]]=leftSoldier[l];

            if(leftSoldier[l]<1) printf("* ");
            else printf("%d ",leftSoldier[l]);
            if(rightSoldier[r]>s) printf("*\n");
            else printf("%d\n",rightSoldier[r]);
        }
        printf("-\n");
    }
    return 0;
}
