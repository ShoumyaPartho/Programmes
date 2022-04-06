#include<iostream>
using namespace std;

int main(){
  long long int tc,a,b,odd1,odd2,even1,even2,res;
  cin>>tc;

  while(tc--){
    cin>>a>>b;

    if(a%2==0){
      odd1=a/2;
      even1=a/2;
    }
    else{
      odd1=a/2+1;
      even1=a/2;
    }
    if(b%2==0){
      odd2=b/2;
      even2=b/2;
    }
    else{
      odd2=b/2+1;
      even2=b/2;
    }
    res=(odd1*odd2)+(even1*even2);
    cout<<res<<endl;
  }
  return 0;
}
