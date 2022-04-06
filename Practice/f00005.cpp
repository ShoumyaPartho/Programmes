#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n,x,l;
    cin>>n;
    vector<int>v;
    while(n--) {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    l=v.size();
    for(int i=0;i<l;i++) cout<<v[i]<<" ";

    return 0;
}
