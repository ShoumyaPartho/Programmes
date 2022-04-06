#include<iostream>
using namespace std;

int main() {
    int n,a,ara[10];
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--){
        for(int i=0;i<10;i++) cin>>ara[i];
        for(int i=1;i<10;i++) {
            if(ara[i]>ara[i-1]) a=1;
            else {
                a=0;
                break;
            }
        }
        if(!a) {
            for(int i=1;i<10;i++) {
                if(ara[i]<ara[i-1]) a=1;
                else {
                    a=0;
                    break;
                }
            }
        }
        if(a) cout<<"Ordered"<<endl;
        else if(!a) cout<<"Unordered"<<endl;
    }
    return 0;
}
