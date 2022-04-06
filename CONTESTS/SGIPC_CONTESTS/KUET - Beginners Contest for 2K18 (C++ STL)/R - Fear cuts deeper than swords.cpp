#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    string n1,n2,s,name;
    map<string,string> mp;
    int n;
    cin>>n;

    while(n--){
        cin>>n1>>n2>>name;
        s=n1+" "+n2;
        mp[s]=name;
    }
    cin>>n;

    while(n--){
        cin>>n1>>n2;
        s=n1+" "+n2;
        cout<<mp[s]<<endl;
    }
    return 0;
}
