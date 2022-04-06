#include<iostream>
//#include<cstdio>
#include<string>
using namespace std;

int main(){
  /*ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);*/

  //freopen("in.txt","r",stdin);

  int tc,activites,temp,laddu;
  string s,origin;
  cin>>tc;
  getchar();

  while(tc--){
    cin>>activites;
    getchar();
    cin>>origin;
    getchar();
    laddu=0;

    while(activites--){
      cin>>s;
      getchar();

      if(s=="CONTEST_WON"){
        laddu+=300;
        cin>>temp;
        getchar();

        if(temp<21) laddu+=20-temp;
      }

      else if(s=="TOP_CONTRIBUTOR") laddu+=300;
      else if(s=="BUG_FOUND"){
        cin>>temp;
        getchar();
        laddu+=temp;
      }
      else if(s=="CONTEST_HOSTED") laddu+=50;
      s.clear();
    }
    if(origin=="INDIAN") cout<<laddu/200<<"\n";
    else if(origin=="NON_INDIAN") cout<<laddu/400<<"\n";

    origin.clear();
  }

  return 0;
}
