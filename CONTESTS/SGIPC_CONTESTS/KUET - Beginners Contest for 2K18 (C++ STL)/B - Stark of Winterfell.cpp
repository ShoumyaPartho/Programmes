#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int tc,q,n;
    map<string,int>::iterator it;
    map<string,int> mp;
    string s;
    cin>>tc;
    while(tc--){
        cin>>q;
        if(q==1){
            cin>>s>>n;
            mp[s]+=n;
        }
        else if(q==2){
            cin>>s;
            mp[s]=0;
        }
        else if(q==3){
            cin>>s;
            cout<<mp[s]<<endl;
        }
    }
    return 0;
}
