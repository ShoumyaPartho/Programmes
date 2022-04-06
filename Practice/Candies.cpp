#include<iostream>
using namespace std;

int main(){
  int tc,n,temp;
  cin>>tc;

  while(tc--){
    cin>>n;

    for(int i=2;;i++){
      temp=(1<<i)-1;
      //cout<<temp<<endl;

      if(!(n%temp)){
        cout<<n/temp<<endl;
        break;
      }
    }
  }
  return 0;
}
