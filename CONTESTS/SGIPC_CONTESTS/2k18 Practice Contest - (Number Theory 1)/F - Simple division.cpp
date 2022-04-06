#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n,tgcd,gcd;
    vector<int>v,v2;
    while(scanf("%d",&n) && n){
        v.push_back(n);
        while(scanf("%d",&n) && n) v.push_back(n);
        for(int i=1;i<v.size();i++) v2.push_back(abs(v[i]-v[0]));
        gcd=v2[0];
        for(int i=1;i<v2.size();i++){
            gcd=__gcd(gcd,v2[i]);
        }
        cout<<gcd<<endl;
        v.clear();
        v2.clear();
    }
    return 0;
}
