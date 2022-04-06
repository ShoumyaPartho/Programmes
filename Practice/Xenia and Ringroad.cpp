#include<iostream>
using namespace std;

int main() {
    long long int n,m,ip=1,s=0;
    cin>>n>>m;
    long long int ara[m];
    for(long long int i=0;i<m;i++) cin>>ara[i];
    for(long long int i=0;i<m;i++) {
        if(ara[i]>ip) {
            s=s+ara[i]-ip;
            ip=ara[i];
        }
        else if(ara[i]<ip) {
            s=s+n-ip+ara[i];
            ip=ara[i];
        }
        else continue;
    }
    cout<<s<<endl;
}
