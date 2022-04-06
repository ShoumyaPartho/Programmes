#include<cstdio>

int main(){
    int tc,n,mid;
    scanf("%d",&tc);

    while(tc--){
        scanf("%d",&n);
        mid=n/2;
        if(mid%2) printf("NO\n");
        else{
            printf("YES\n");
            for(int i=1;i<=mid;i++) printf("%d ",2*i);
            for(int i=1;i<mid;i++) printf("%d ",2*i-1);
            printf("%d\n",3*mid-1);
        }
    }
    return 0;
}
