#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main() {

    int n,a;
    cin>>n;
    string str[n],bs[16];
    bs[0]="Happy",bs[1]="birthday", bs[2]="to",bs[3]="you",bs[4]=bs[8]=bs[12]=bs[0],bs[5]=bs[9]=bs[13]=bs[1],bs[6]=bs[10]=bs[14]=bs[2],bs[7]=bs[15]=bs[3],bs[11]="Rujia";
    for(int i=0;i<n;i++) cin>>str[i];
    int ara[n];
    for(int i=0;i<n;i++) ara[i]=0;
    for(int i=0,j=0;i<16;i++,j++) {
        cout<<str[j]<<": "<<bs[i]<<endl;
        ara[j]=1;
        if(j==n-1) j=-1;
        if(i==15){
            for(int x=0;x<n;x++) {
                if(ara[x]==0) {
                    a=0;
                    break;
                }
                else a=1;
            }
            if(a) break;
            else if(!a) i=-1;
        }
    }
    //cout<<"Programme should Terminate"<<endl;

    return 0;
}
