#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ara[3];
    cin>>ara[0]>>ara[1]>>ara[2];
    sort(ara,ara+3);

    cout<<(ara[1]-ara[0])+(ara[2]-ara[1])<<endl;

    return 0;
}
