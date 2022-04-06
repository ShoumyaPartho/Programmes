#include<iostream>
#include<algorithm>
using namespace std;

bool check[999999];

int main(){
    int ans=0,state=0,n,num;
    char c;

    cin>>n;
    while(n--){
        cin>>c>>num;
        if(c=='+'){
            state++;
            ans=max(state,ans);
            check[num]=true;
        }
        else if(c=='-'){
            if(check[num]==true){
                state--;
                check[num]=false;
            }
            else if(check[num]==false) {
                check[num]=false;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
