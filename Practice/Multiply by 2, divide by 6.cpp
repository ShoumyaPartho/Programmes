#include<iostream>
#include<string>
using namespace std;

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif // ONLINE_JUDGE
}

int main(){
  fastIO();

  int tc,n,three,two,temp;
  cin>>tc;

  while(tc--){
    cin>>n;
    three=two=0,temp=n;

    while(temp%2==0) {
      temp>>=1;
      two++;
    }
    while(temp%3==0){
      temp/=3;
      three++;
    }
    if(two>three || temp>1) cout<<"-1\n";
    else cout<<three+(three-two)<<"\n";
  }
  return 0;
}
