#include<iostream>
#include<map>

using namespace std;

int main(){
    int n,t,pts=0;
    cin>>n;
    map<int,int> mp;
    map<int,int>:: iterator it;
    while(n--){
        cin>>t;
        mp[t]+=t;
    }
    for(it=mp.begin()+1;it!=mp.end();it++){
        if((*it-*(it-1))==1){
            if((*it * mp[*it]) >= (*(it-1) * mp[*(it-1)])) pts+=*it * mp[*it];
            else {
                pts+=(*(it-1) * mp[*(it-1)]);
                mp[*(it-1)]=0;
            }
        }
        else if
    }
}
