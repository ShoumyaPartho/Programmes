#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n,b,h,w;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF) {
        int ara[h],cost,beds[w],res=0,a=0,sum=10000000;
        for(int i=1;i<=h;i++) {
            res=0;
            cin>>cost;
            if((cost*n)<=b) res=1;
            for(int j=0;j<w;j++) {
                cin>>beds[j];
            }
            if(res==1) {
                for(int j=0;j<w;j++) {
                    if(beds[j]>=n){
                        if((n*cost)<sum) sum=n*cost;
                        a=1;
                    }
                }
            }
        }
        if(a) printf("%d\n",sum);
        else printf("stay home\n");
    }
    return 0;
}
