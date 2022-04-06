#include<iostream>
using namespace std;

int main() {
    int s,n,r;
    cin>>s>>n;
    int ara[n][2];
    for(int i=0;i<n;i++) cin>>ara[i][0]>>ara[i][1];
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(ara[i][0]>ara[j][0]){
                int temp=ara[i][0];
                ara[i][0]=ara[j][0];
                ara[j][0]=temp;
                temp=ara[i][1];
                ara[i][1]=ara[j][1];
                ara[j][1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        //cout<<ara[i][0]<<endl;
        if(s>ara[i][0]) {
            r=1;
            s+=ara[i][1];
            //cout<<r<<endl;
        }
        else {
            r=0;
            break;
            //cout<<r<<endl;
        }
    }

    if(r) cout<<"YES"<<endl;
    else if(!r) cout<<"NO"<<endl;

    return 0;
}
