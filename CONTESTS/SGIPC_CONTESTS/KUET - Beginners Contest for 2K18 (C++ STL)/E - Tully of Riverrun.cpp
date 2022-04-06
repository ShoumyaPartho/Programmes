#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,q,m;
    vector<int>v;
    vector<int>::iterator it;
    cin>>n;
    while(n--) {
        cin>>m;
        v.push_back(m);
    }
    cin>>q;
    while(q--){
        cin>>m;
        it=lower_bound(v.begin(),v.end(),m);
        if(*it==m) cout<<"Yes "<<it-v.begin() + 1<<endl;
        else if(*it!=m){
            cout<<"No "<<it-v.begin() + 1<<endl;
        }
    }
    return 0;
}
