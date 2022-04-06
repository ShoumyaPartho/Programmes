#include<iostream>
using namespace std;

int main(){
    int n,x,y,j;
    cin>>n>>x>>y;
    if(x<=y && n>x) cout<<"-1"<<endl;
    else{
        int time,cnt=0;
        for(j=1;;j++){
            if(j%2==0) cnt-=y;
            else if(j%2==1) cnt +=x;
            if (cnt>=n) break;
        }
        cout<<j<<endl;
    }
    return 0;
}
