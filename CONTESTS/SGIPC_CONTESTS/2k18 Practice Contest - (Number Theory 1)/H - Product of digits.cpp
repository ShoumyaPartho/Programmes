#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    long long int tc,n,num;
    vector<int>v;
    cin>>tc;

    while(tc--){
        cin>>n;
        if(n>=0 && n<=9) cout<<n<<endl;
        else{
            num=9;
            while(num>1){
                if(n%num==0){
                    n=n/num;
                    v.push_back(num);
                }
                else num--;
            }
            if(n>=10) cout<<"-1"<<endl;
            else if(n>=2 && n<=9) {
                v.push_back(n);
                sort(v.begin(),v.end());
                for(int i=0;i<v.size();i++) cout<<v[i];
                cout<<endl;
            }
            else if(n==1){
                sort(v.begin(),v.end());
                for(int i=0;i<v.size();i++) cout<<v[i];
                cout<<endl;
            }
        }
        v.clear();
    }
    return 0;
}
