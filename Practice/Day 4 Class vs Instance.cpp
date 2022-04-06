#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        if(n<0) {
            cout<<"Age is not valid, setting age to 0."<<endl;
            cout<<"You are young."<<endl<<"You are young."<<endl;
        }
        else if(n<13){
            cout<<"You are young."<<endl;
            if((n+3)>=13 && (n+3)<18) cout<<"You are a teenager."<<endl;
            else cout<<"You are young."<<endl;
        }
        else if(n>=13 && n<18){
            cout<<"You are a teenager."<<endl;
            if((n+3)>=18) cout<<"You are old"<<endl;
            else cout<<"You are a teenager."<<endl;
        }
        else if(n>=18) cout<<"You are old"<<endl<<"You are old"<<endl;
        cout<<endl;
    }
    return 0;
}
