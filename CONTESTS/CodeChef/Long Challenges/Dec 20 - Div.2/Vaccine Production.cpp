#include<iostream>
using namespace std;

int main(){
  int d1,v1,d2,v2,p,cnt=0,i;
  cin>>d1>>v1>>d2>>v2>>p;

  for(i=1;;i++){
    if(d1<=i) cnt+=v1;
    if(d2<=i) cnt+=v2;

    if(cnt>=p) break;
  }
  cout<<i<<endl;
}
