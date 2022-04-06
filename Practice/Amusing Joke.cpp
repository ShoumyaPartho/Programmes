#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    /*map<char,int>mp1,mp2;
    int l=s1.size();
    for(int i=0;i<l;i++) mp1[s1[i]]++;
    l=s2.size();
    for(int i=0;i<l;i++) mp1[s2[i]]++;
    l=s3.size();
    for(int i=0;i<l;i++) mp2[s3[i]]++;*/
    vector<int>v(26,0),vp(26,0);
    int l=s1.size(),a;
    for(int i=0;i<l;i++) v[((int)s1[i])-65]++;
    l=s2.size();
    for(int i=0;i<l;i++) v[((int)s2[i])-65]++;
    l=s3.size();
    for(int i=0;i<l;i++) vp[((int)s3[i])-65]++;
    for(int i=0;i<26;i++) {
        if(v[i]!=vp[i]) {
            a=0;
            break;
        }
        else a=1;
    }
    if(a) cout<<"YES"<<endl;
    else if(!a) cout<<"NO"<<endl;

    return 0;
}
