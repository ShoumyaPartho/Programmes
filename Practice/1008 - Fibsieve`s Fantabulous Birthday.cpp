#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    unsigned long long int tc,n,cil,flor,mid,temp1,temp2;
    cin>>tc;
    for(int i=1;i<=tc;i++) {
        cin>>n;
        cil=ceil(sqrt(n));
        flor=floor(sqrt(n));
        //cout<<cil<<" "<<flor;
        if((cil-flor) == 0){
            if(cil%2==0) cout<<"Case "<<i<<": "<<n/cil<<" "<<1<<endl;
            else if(cil%2==1) cout<<"Case "<<i<<": "<<1<<" "<<n/cil<<endl;
        }
        else if(cil-flor!=0){
            mid=((cil*cil)+((flor*flor)+1))/2;
            temp1=cil,temp2=flor;
            cil*=cil,flor*=flor;
            if(cil%2==1){
                if(n>mid) cout<<"Case "<<i<<": "<<cil-n+1<<" "<<temp1<<endl;
                else if(n<mid) cout<<"Case "<<i<<": "<<temp1<<" "<<n-flor<<endl;
                else if(n==mid) cout<<"Case "<<i<<": "<<temp1<<" "<<temp1<<endl;
            }
            else if(cil%2==0) {
                if(n>mid) cout<<"Case "<<i<<": "<<temp1<<" "<<cil-n+1<<endl;
                else if(n<mid) cout<<"Case "<<i<<": "<<n-flor<<" "<<temp1<<endl;
                else if(n==mid) cout<<"Case "<<i<<": "<<temp1<<" "<<temp1<<endl;
            }
        }
    }
    return 0;
}
