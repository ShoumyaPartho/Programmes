#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF){
        if(n==m) cout<<n<<endl;
        else cout<<n+m<<endl;
    }
    return 0;
}
