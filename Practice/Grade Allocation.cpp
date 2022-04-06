#include<cstdio>

int main(){
    int tc;
    scanf("%d",&tc);

    while(tc--){
        int n,m;
        scanf("%d %d",&n,&m);
        int temp,sum=0,res;
        for(int i=0;i<n;i++) {
            scanf("%d",&temp);
            if(i==0) res=temp;
            else sum+=temp;
        }
        if((res+sum)>=m) printf("%d\n",m);
        else printf("%d\n",res+sum);
    }
    return 0;
}
