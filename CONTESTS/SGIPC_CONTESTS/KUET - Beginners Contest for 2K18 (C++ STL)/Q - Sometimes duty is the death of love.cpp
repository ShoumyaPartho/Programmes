#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    int n;

    while(1){
        cin>>n;
        if(n==0) break;
        map<string,int> mp;
        while(n--){
            string s;
            cin>>s;
            mp[s]++;
        }
        string st;
        int mx=0;

        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second > mx) {
                mx=it->second;
                st=it->first;
            }
        }
        cout<<st<<endl;
    }
    return 0;
}
