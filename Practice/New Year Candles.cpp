#include<iostream>
using namespace std;

int main(){
  int a,b,hours=0,mod=0;
  cin>>a>>b;

  while(1){
    hours+=a;
    a+=mod;
    mod=a%b;
    a/=b;
    if(!a) break;
  }
  cout<<hours<<endl;

  return 0;
}
