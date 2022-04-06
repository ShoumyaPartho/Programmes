#include<iostream>
using namespace std;

int main(){
    int n,t,position=1;
    cin>>n>>t;
    int line[n+1];
    for(int i=1;i<n;i++) cin>>line[i];

    if(t==position) cout<<"YES"<<endl;
    else if(t<position) cout<<"NO"<<endl;
    else{
        for(int i=1;i<n+1;){
            if(position==t) {
                cout<<"YES"<<endl;
                break;
            }
            else if(position>t) {
                cout<<"NO"<<endl;
                break;
            }
            else {
                //cout<<position<<endl;
                position+=line[i];
                i+=line[i];
            }
        }
    }
}
