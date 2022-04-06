#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    int tc,r,c,res,sum,temp1,temp2;
    cin>>tc;
    for(int i=1;i<=tc;i++) {
        cin>>r>>c;
        sum=0,temp1=3,temp2=4;;
        if(r==1 || c==1){
            if(r==1) cout<<"Case "<<i<<": "<<c<<endl;
            else if(c==1) cout<<"Case "<<i<<": "<<r<<endl;
        }
        else if(r==2 || c==2) {
            if(c==2) swap(r,c);
            for(int j=1;j<=c;j++){
                if(j==temp1){
                    temp1+=4;
                    continue;
                }
                else if(j==temp2){
                    temp2+=4;
                    continue;
                }
                sum+=2;
            }
            cout<<"Case "<<i<<": "<<sum<<endl;
        }
        else{
            sum=ceil((double)r*c/2);
            cout<<"Case "<<i<<": "<<sum<<endl;
        }
    }
    return 0;
}
