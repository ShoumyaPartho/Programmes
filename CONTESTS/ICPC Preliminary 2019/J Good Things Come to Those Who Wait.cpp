#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    unsigned long long int tc,t,i,n,num;
    scanf("%llu",&tc);
    for(t=1;t<=tc;t++){
        scanf("%llu",&n);
        unsigned long long int ara[n];
        for(i=0;i<n;i++) scanf("%llu",&ara[i]);
        sort(ara,ara+n);
        if(n==1) printf("Case %llu: %llu\n",t,ara[0]*ara[0]);
        else printf("Case %llu: %llu\n",t,ara[0]*ara[n-1]);
    }
    return 0;
}
