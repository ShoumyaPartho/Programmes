#include<iostream>
using namespace std;

int main(){
  int tc,angle;
  cin>>tc;

  while(tc--){
    cin>>angle;
    if(!(360%(180-angle))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
