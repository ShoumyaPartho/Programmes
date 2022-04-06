#include<iostream>
#include<map>
#include<cstdio>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        int ara[n+1],ans=0,bgn=1;
        for(int i=1;i<=n;i++){
            cin>>ara[i];
            if(mp[ara[i]]>=bgn) bgn=mp[ara[i]]+1;
            mp[ara[i]]=i;
            ans=(i-bgn+1)>ans? (i-bgn+1):ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}
