#include<iostream>
#include<string>
using namespace std;

int main(){
    int t,n,c1,c2;
    string s;

    cin>>t;
    while(t--){
        c1=c2=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            c1=0;
            if(s[i]=='A'){
                for(int j=i+1;j<n;j++){
                    if(s[j]=='P') c1++;
                    else break;
                }
                if(c1>c2) c2=c1;
            }
        }
        cout<<c2<<endl;
    }
    return 0;
}
