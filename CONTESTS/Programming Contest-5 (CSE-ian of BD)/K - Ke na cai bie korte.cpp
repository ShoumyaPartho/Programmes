#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    unsigned long long int tc,n;
    cin>>tc;
    for(unsigned long long int i=1;i<=tc;i++){
        cin>>n;
        unsigned long long int ara[n];
        for(unsigned long long int j=0;j<n;j++) cin>>ara[j];
        sort(ara,ara+n);
        for(unsigned long long int j=0;j<n;j++){
            if(ara[j]==ara[j+1]) j++;
            else cout<<"Case "<<i<<": "<<ara[j]<<endl;
        }
        /*for(unsigned long long int x=0;x<n-1;x++){
            for(unsigned long long int y=x+1;y<n;y++){
                if(ara[x]==ara[y]){
                    ara[x]=ara[y]=0;
                    break;
                }
            }
        }
        for(unsigned long long int j=0;j<n;j++) {
            if(ara[j]!=0){
                cout<<"Case "<<i<<": "<<ara[j]<<endl;
                break;
            }
        }*/
    }
    return 0;
}
