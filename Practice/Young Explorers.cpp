#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc,n;
    cin>>tc;

    while(tc--){
        cin>>n;
        int ara[n],group=0,num=0;
        for(int i=0;i<n;i++) cin>>ara[i];
        sort(ara,ara+n);

        for(int i=0;i<n;i++){
            if(++num==ara[i]) {
                group++;
                num=0;
            }
        }
        cout<<group<<endl;
    }
    return 0;
}
