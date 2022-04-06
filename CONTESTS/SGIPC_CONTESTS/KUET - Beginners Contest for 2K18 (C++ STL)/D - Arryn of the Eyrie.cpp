#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,a,b,l;
    vector<int>vc;
    cin>>n;
    while(n--){
        cin>>a;
        vc.push_back(a);
    }
    cin>>a;
    vc.erase(vc.begin()+a-1);
    cin>>a>>b;
    vc.erase(vc.begin()+(a-1),vc.begin()+(b-1));
    l=vc.size();
    cout<<l<<endl;
    for(int &x : vc) cout<<x<<" ";
    cout<<endl;

    return 0;
}
