#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    int n,m,q,year;
    cin>>n>>m;
    string s;
    map<int,string>mpn,mpm;

    for(int i=1;i<=n;i++){
        cin>>s;
        mpn[i]=s;
    }
    for(int i=1;i<=m;i++){
        cin>>s;
        mpm[i]=s;
    }

    cin>>q;
    while(q--){
        cin>>year;
        if(year%n) cout<<mpn[year%n];
        else cout<<mpn[n];

        if(year%m) cout<<mpm[year%m]<<endl;
        else cout<<mpm[m]<<endl;
    }

    return 0;
}
