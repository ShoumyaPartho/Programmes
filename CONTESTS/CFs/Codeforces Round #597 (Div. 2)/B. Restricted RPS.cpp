#include<iostream>
#include<string>
using namespace std;

int main(){
    int t,a1,a2,b1,b2,c1,c2,n,a,b;
    string s;

    cin>>t;
    while(t--){
        cin>>n>>a1>>b1>>c1;
        a=b=a2=b2=c2=0;
        cin>>s;
        for(int i=0;s[i]!='\0';i++) {
            if(s[i]=='R') a2++;
            if(s[i]=='S') b2++;
            if(s[i]=='P') c2++;
        }
        if()
    }
    return 0;
}
