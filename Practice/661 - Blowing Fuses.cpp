#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
    int n,m,c,highest,t,temp,tc=0;

    while(scanf("%d %d %d",&n,&m,&c) && n && m && c){
        tc++;
        bool state[n+1];
        memset(state,0,sizeof(state));
        int power[n+1];
        memset(power,0,sizeof(power));

        highest=temp=0;

        for(int i=1;i<=n;i++){
            cin>>t;
            power[i]=t;
        }

        for(int i=0;i<m;i++){
            cin>>t;
            if(state[t]==0){
                state[t]=1;
                temp+=power[t];

                if(temp>highest) highest=temp;
            }
            else if(state[t]==1){
                state[t]=0;
                temp-=power[t];

                if(temp>highest) highest=temp;
            }
        }

        if(highest>c) cout<<"Sequence "<<tc<<endl<<"Fuse was blown."<<endl<<endl;
        else cout<<"Sequence "<<tc<<endl<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<highest<<" amperes."<<endl<<endl;
    }
    return 0;
}
