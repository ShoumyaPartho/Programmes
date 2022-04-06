#include<iostream>
using namespace std;

int main(){
    int n,tc=0;

    while(cin>>n,n){
        int ara[n],sum=0,av,res=0;
        for(int i=0;i<n;i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        av=sum/n;
        for(int i=0;i<n;i++){
            if(ara[i]>av) res+=ara[i]-av;
        }
        cout<<"Set #"<<++tc<<endl<<"The minimum number of moves is "<<res<<".\n\n";
    }
    return 0;
}
