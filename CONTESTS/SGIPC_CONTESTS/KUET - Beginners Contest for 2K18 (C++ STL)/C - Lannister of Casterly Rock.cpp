#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,a;
    vector<int>vc;
    cin>>n;
    while(n--){
        cin>>a;
        vc.push_back(a);
    }
    sort(vc.begin(),vc.end());
    for(int &x : vc) cout<<x<<" ";
    cout<<endl;

    return 0;
}
