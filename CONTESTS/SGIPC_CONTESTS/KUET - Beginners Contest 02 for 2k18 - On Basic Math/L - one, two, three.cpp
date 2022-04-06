#include<iostream>
using namespace std;

int main(){
    long long int temp,x,y,n,ara[7];
    cin>>x>>y>>n;

    if((n%6)==1) cout<<(x+1000000007)%1000000007<<endl;
    else if((n%6)==2) cout<<(y+1000000007)%1000000007<<endl;
    else if((n%6)==0) {
        n=6;
        ara[1]=x,ara[2]=y;
        for(int i=3;i<=n;i++) ara[i]=(1000000007+ara[i-1]-ara[i-2])%1000000007;
        while(ara[n]<0) ara[n]+=1000000007;
        cout<<ara[n]%1000000007<<endl;
    }
    else{
        n%=6;
        ara[1]=x,ara[2]=y;
        for(int i=3;i<=n;i++) ara[i]=(1000000007+ara[i-1]-ara[i-2])%1000000007;
        while(ara[n]<0) ara[n]+=1000000007;
        cout<<ara[n]%1000000007<<endl;
    }
    return 0;
}
