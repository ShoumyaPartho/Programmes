#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    char name[10][110];
    int ara[10],l,tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        l=0;
        for(int j=0;j<10;j++){
            scanf("%s %d",name[j],&ara[j]);
            if(ara[j]>l) l=ara[j];
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0;j<10;j++) {
            if(l==ara[j]) cout<<name[j]<<endl;
        }
    }
    return 0;
}
