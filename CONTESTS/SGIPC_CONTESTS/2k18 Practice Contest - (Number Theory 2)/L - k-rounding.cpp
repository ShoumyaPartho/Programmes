#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int n,k,x,temp=1,gcd;
    cin>>n>>k;

    for(int i=1;i<=k;i++) temp*=10;
    gcd=__gcd(n,temp);
    x=(n/gcd)*temp;

    cout<<x<<endl;

    return 0;
}
