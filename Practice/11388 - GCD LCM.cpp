#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int tc,t,g,l,a,b,mul,gcd,lcm,check;
    cin>>tc;
    for(t=1;t<=tc;t++){
        cin>>g>>l;

        if(l%g!=0){
            cout<<"-1"<<endl;
            continue;
        }
        else cout<<g<<" "<<l<<endl;
    }
    return 0;
}
