#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    while(k){
        if(n%10==0) n=n/10;
        else if(n%10!=0) n-=1;
        k--;
    }
    cout<<n<<endl;
    return 0;
}
