#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int tc,a,b,res;
  cin>>tc;

  while(tc--){
    cin>>a>>b;
    if(a>b) swap(a,b);
    if((b-a)%10) res=((b-a)/10)+1;
    else res=(b-a)/10;
    cout<<res<<endl;
  }
}
