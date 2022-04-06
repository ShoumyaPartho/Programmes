#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
    string s1,s2;
    map<string,int> mp;
    map<string,int>::iterator it;
    for(int i=1;i<=5;i++) {
        cin>>s1>>s2;
        mp[s1]++,mp[s2]++;
    }
    for(it=mp.begin();it!=mp.end();it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
