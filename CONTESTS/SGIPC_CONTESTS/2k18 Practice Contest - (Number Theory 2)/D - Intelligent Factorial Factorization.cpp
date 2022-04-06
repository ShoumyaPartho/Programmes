#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int>v,facors;
bool check[110];
int freq[110];

void primelist(){
    v.push_back(2);

    for(int i=3;i<=110;i+=2){
        if(!check[i]){
            v.push_back(i);
            for(int j=i*i;j<=110;j+=i+i) check[j]=true;
        }
    }
}

void fact(int n){

    for(int i=0;i<v.size() && v[i]<=n;i++){
        int temp=n;
        while(temp){
            freq[v[i]]+=(temp/v[i]);
            temp/=v[i];
        }
    }
}

int main(){
    primelist();

    int tc,t,n;
    cin>>t;

    for(tc=1;tc<=t;tc++){
        cin>>n;
        cout<<"Case "<<tc<<": "<<n<<" = ";
        fact(n);
        for(int i=0;i<v.size();i++){
            if(freq[v[i]]) cout<<v[i]<<" ("<<freq[v[i]]<<")";
            if(freq[v[i+1]]) cout<<" * ";
            else {
                cout<<endl;
                break;
            }
        }
        for(int i=0;i<=110;i++) freq[i]=0;
    }
    return 0;
}
