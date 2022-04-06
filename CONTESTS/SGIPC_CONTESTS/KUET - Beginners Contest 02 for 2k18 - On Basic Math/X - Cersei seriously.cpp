#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    long long int t,n;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cin>>n;
        if(n%2==1) printf("Case %d: Impossible\n",i);
        else{
            for(long long int j=2;j<=(n/2);j+=2) {
                if(n%j==0 && (n/j)%2==1){
                    printf("Case %d: %lld %lld\n",i,n/j,j);
                    break;
                }
            }
        }
    }
    return 0;
}
