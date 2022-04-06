#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int N;

    while(cin>>N,N){
        cin.ignore();
        int t,ara[N],res=0,high=0;
        string c;

        for(t=0;t<N;t++){
            ara[t]=0;
            getline(cin,c);
            for(int i=0;i<25;i++){
                if(c[i]=='X') ara[t]++;
                else if(c[i]==' ') continue;
            }
            if(ara[t]>high) high=ara[t];
        }

        for(t=0;t<N;t++) res+=abs(high-ara[t]);

        cout<<res<<endl;
    }
    return 0;
}
