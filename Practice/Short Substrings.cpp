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

  string a,b;
  int tc,len;
  cin>>tc;

  while(tc--){
    cin>>b;
    a=b[0],len=b.length();

    for(int i=1;i<len;i+=2) a+=b[i];
    cout<<a<<"\n";
  }
  return 0;
}
