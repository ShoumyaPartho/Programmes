#include<iostream>
#include<string>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    getchar();

    while(tc--){
        string s;

        getline(cin,s);
        int m=0,f=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='M') m++;
            else if(s[i]=='F') f++;
            else continue;
        }
        if(m==1 && f==1) cout<<"NO LOOP"<<endl;
        else if(m==f) cout<<"LOOP"<<endl;
        else cout<<"NO LOOP"<<endl;
    }
    return 0;
}
