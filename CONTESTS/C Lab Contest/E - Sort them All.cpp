#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc,t,num[3];
    cin>>tc;
    for(t=1;t<=tc;t++){
        cin>>num[0]>>num[1]>>num[2];
        sort(num,num+3);
        cout<<"Case "<<t<<": "<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
    }
    return 0;
}
