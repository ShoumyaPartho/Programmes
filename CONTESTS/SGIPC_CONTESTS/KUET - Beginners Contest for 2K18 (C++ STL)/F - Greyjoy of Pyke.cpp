#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,x;
    map<long long int,long long int>mp;
    vector<long long int>v;
    while(1){
        cin>>n;
        if(n==0){
            cin>>m;
            if(m==0) break;
        }
        cin>>m;
        for(int i=0;i<n+m;i++){
            cin>>x;
            mp[x]++;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(mp[v[i]]==2) cnt++;
        }
        cout<<cnt<<endl;
        mp.clear();
        v.clear();
    }
    return 0;
}
