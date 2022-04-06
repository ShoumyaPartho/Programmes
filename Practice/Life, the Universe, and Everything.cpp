#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  bool flag=false;
  long long int n;

  while(scanf("%lld",&n)!=EOF){
    //cin>>n;

    if(n==42) flag=true;

    if(!flag) cout<<n<<endl;

  }
  return 0;
}
