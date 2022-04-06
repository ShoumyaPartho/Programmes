#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t,tc,n,temp,dif,num,ans;
    cin>>t;

    for(tc=1;tc<=t;tc++){
        dif=num=0;
        cin>>n;
        int ara[n+1];
        ara[0]=0;
        for(int i=1;i<=n;i++){
            cin>>temp;
            ara[i]=temp;
            dif=(temp-num)>dif?temp-num:dif;
            num=temp;
        }
        ans=dif;

        for(int i=1;i<=n;i++){
            if((ara[i]-ara[i-1])==dif) dif--;
            else if((ara[i]-ara[i-1])>dif) {
                ans++;
                break;
            }
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;
    }
    return 0;
}
