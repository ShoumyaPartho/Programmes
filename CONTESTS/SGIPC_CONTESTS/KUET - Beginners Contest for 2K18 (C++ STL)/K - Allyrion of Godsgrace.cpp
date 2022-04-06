#include<iostream>
#include<map>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    int n;
    string s1,s2;
    map<string,string> mp;
    cin>>n;
    for(int i=0;i<n;i++){
        if(!i) getchar();
        getline(cin,s1);
        getline(cin,s2);
        mp[s1]=s2;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        if(!i) getchar();
        getline(cin,s1);
        cout<<mp[s1]<<endl;
    }
    return 0;
}
