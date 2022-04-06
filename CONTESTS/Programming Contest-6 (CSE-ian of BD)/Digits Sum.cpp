#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    char c;
    int sum=0;
    getline(cin,s);
    for(auto it=s.begin();it!=s.end();it++){
        c=*it;
        sum+=(int)(c-'0');
    }
    cout<<sum<<endl;
    return 0;
}
