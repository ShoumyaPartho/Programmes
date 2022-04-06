#include<iostream>
using namespace std;

int main(){
    int money[5],bill=0,n,i=4;
    money[0]=1,money[1]=5,money[2]=10,money[3]=20,money[4]=100;

    cin>>n;
    while(n){
        bill+=(n/money[i]);
        n-=(n/money[i])*money[i];
        i--;
    }
    cout<<bill<<endl;

    return 0;
}
