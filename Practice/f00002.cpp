#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main() {
    /*vector<int>v;
    v.push_back(69);
    v.push_back(45);
    v.push_back(33);
    v.push_back(16);
    v.push_back(20);
    //v.erase(v.begin()+0);
    reverse(v.begin(),v.begin()+3);
    for(int i=0;i<5;i++)    cout<<v[i]<<endl;*/
    /*set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(69);
    s.insert(69);
    int l=s.size();
    cout<<l<<endl;
    set<int>::iterator it=s.begin();
    for(it=s.begin();it!=s.end();it++) cout<<*it<<endl;*/
    map<long long int,int>mp;
    map<long long int,int>::iterator it;
    for(int i=1;i<6;i++) {
        int x;
        cin>>x;
        mp[x]++;
    }
    for(it=mp.begin();it!=mp.end();it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
