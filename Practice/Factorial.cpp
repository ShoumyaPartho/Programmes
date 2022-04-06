#include<iostream>
//#include<cstdio>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  //freopen("in.txt","r",stdin);

  long long int tc,n,counter,powOfFive;

  cin>>tc;
  //getchar();
  //cout<<"Test: "<<tc<<endl;

  while(tc--){
    //getchar();
    cin>>n;
    //cout<<"Num: "<<n<<endl;
    //getchar();
    //cout<<"Number is: "<<n<<"\n";
    powOfFive=5,counter=0;

    while(n>=powOfFive){
      counter+=(n/powOfFive);
      powOfFive*=5;
      //cout<<"It's Me "<<powOfFive<<endl;
    }
    cout<<counter<<"\n";
  }

  return 0;
}
