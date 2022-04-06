#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std;

#define MAX 20000004

vector<int>v;
vector<pair<int,int> > vp;
bool check[MAX];
void primelist(){
    int lim=sqrt(MAX*1.0)+2;
    for(int i=3;i<=MAX;i+=2){
        if(!check[i]){
            v.push_back(i);
            if(i<=lim){
                for(int j=i*i;j<=MAX;j+=i) check[j]=true;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i+1]-v[i]==2) vp.push_back({v[i],v[i+1]});
    }
}

int main(){
    primelist();
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("(%d, %d)\n",vp[n-1].first,vp[n-1].second);
    }
}
