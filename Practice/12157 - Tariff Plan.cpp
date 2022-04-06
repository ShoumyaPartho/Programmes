#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int x=1;x<=t;x++){
        cin>>n;
        int ara[n],cm=0,cj=0;
        for(int i=0;i<n;i++) {
            cin>>ara[i];
            if((ara[i]%30)==0) cm+=((ara[i]/30)+1);
            else if((ara[i]%30)!=0) cm+=ceil((double)ara[i]/30);

            if((ara[i]%60)==0) cj+=((ara[i]/60)+1);
            else if((ara[i]%60)!=0) cj+=ceil((double)ara[i]/60);
        }
        if((cm*10)<(cj*15)) printf("Case %d: Mile %d\n",x,cm*10);
        else if((cm*10)>(cj*15)) printf("Case %d: Juice %d\n",x,cj*15);
        else if((cm*10)==(cj*15)) printf("Case %d: Mile Juice %d\n",x,cm*10);
    }
    return 0;
}
