#include<iostream>
using namespace std;

int main(){
  int n,m,a,b,cost=0;
  cin>>n>>m>>a>>b;

  if((m*a)<=b) cost+=(n*a);
  else {
    cost+=(n/m)*b;
    n%=m;
    if(n){
      if((n*a)<=b) cost+=(n*a);
      else cost+=b;
    }
  }
  cout<<cost<<endl;

  return 0;
}
