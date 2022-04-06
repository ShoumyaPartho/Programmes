#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    map<int,int> m;
    vector<int>v;
    vector<int>::iterator i;
    while(scanf("%d",&n)!=EOF){
        m[n]++;
        for(i=v.begin();i!=v.end();i++){
            if(*i==n) break;
        }
        if(i==v.end()) v.push_back(n);
    }
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" "<<m[*it]<<endl;
    return 0;
}
