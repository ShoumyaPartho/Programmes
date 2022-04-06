#include<iostream>
using namespace std;

int main(){
    int a,c;

    while(cin>>a && a){
        cin>>c;
        int length[c],high,cnt=0;
        cin>>length[0];
        high=length[0];

        for(int i=1;i<c;i++){
            cin>>length[i];
            if(length[i]<length[i-1]) cnt+=length[i-1]-length[i];
            else if(length[i]>length[i-1]){
                if(length[i]>high){
                    cnt+=length[i]-high;
                    high=length[i];
                }
            }
        }
        if(a>high) cnt+=a-high;
        cout<<cnt<<endl;
    }
    return 0;
}
