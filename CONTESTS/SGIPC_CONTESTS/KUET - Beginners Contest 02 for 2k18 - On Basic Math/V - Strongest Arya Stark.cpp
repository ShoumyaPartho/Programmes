#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k,t,ans;
    cin>>n>>k;

    int cnt[k]={0};

    for(int i=0;i<n;i++){
        cin>>t;
        cnt[t%k]++;
    }
    ans=(cnt[0]/2);
    if(k%2==0) ans+=(cnt[k/2]/2);

    for(int i=1;i<(k+1)/2;i++) ans+=min(cnt[i],cnt[k-i]);

    cout<<ans*2<<endl;

    return 0;
}
