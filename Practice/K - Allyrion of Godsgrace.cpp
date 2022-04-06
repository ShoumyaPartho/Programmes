#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n,m,temp1,j;
    string s1,s2;
    cin>>n;
    for(int x=0;x<n;x++){
        getline(cin,s1[x]);
        getline(cin,s2[x]);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        getline(cin,temp1);
        for(j=0;j<n;j++){
            if(s1[j]==temp1) break;
        }
        cout<<s2[j]<<endl;
    }
    return 0;
}
