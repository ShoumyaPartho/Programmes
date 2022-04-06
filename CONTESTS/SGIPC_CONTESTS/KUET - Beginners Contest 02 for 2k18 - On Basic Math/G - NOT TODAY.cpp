#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int n,l;
    while(scanf("%d",&n)!=EOF) {
        v.push_back(n);
        sort(v.begin(),v.end());
        l=v.size();
        if(l==1) cout<<v[0]<<endl;
        else if(l==2) cout<<(v[0]+v[1])/2<<endl;
        else {
            if(l%2==1) cout<<v[((l+1)/2)-1]<<endl;
            else if(l%2==0){
                cout<<(v[(l/2)-1] + v[l/2])/2<<endl;
            }
        }
    }
    return 0;
}
