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

  int tc,n,mul,temp;
  string s;

  cin>>tc;

  while(tc--){
    cin>>n;
    cin>>s;
    //getchar();
    string os="";

    for(int i=0;i<=n-4;i+=4){
      mul=1,temp=0;

      //Now calculate values for all 4 digit sets
      for(int j=i+3;j>=i;j--){
        if(s[j]=='1') temp+=mul;
        mul<<=1;
      }

      os+=('a'+temp);
    }
    cout<<os<<"\n";
    //if(tc) cout<<"\n";

    s.clear();
    os.clear();
  }
  return 0;
}
