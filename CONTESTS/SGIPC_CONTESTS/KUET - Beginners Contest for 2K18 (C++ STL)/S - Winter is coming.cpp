#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

bool mysort(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first) return (a.first<b.first);
    return a.second>b.second;
}

int main(){
    int t,n,n1,n2;
    scanf("%d",&t);

    while(t--){
        vector<pair<int,int> > v;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d %d",&n1,&n2);
            v.push_back({n1,n2});
        }
        sort(v.begin(),v.end(),mysort);

        for(int i=0;i<n;i++) printf("%d %d\n",v[i].first,v[i].second);
    }
    return 0;
}
