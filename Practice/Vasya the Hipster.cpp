#include<iostream>
//#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a<b) swap(a,b);
    cout<<b<<" "<<(a-b)/2<<endl;

    return 0;
}
