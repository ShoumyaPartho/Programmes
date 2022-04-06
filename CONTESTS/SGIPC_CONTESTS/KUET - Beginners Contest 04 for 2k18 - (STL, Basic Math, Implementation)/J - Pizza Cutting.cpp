#include<iostream>
using namespace std;

int main(){
    long long int n;

    while(1){
        cin>>n;
        if(n<0) break;
        cout<<(n*(n+1)/2)+1<<endl;
    }
    return 0;
}
