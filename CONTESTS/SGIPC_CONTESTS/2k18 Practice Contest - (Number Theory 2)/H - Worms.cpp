#include<iostream>
using namespace std;

int bin_search(int ara[],int high,int num){
    int low=0,t;

    while(low<=high){
        int mid=(low+high)/2;
        if(ara[mid]>=num && ara[mid-1]<num) {
            t=mid;
            break;
        }
        else if(ara[mid]<num) low=mid+1;
        else high=mid-1;
    }
    return t;
}

int main(){
    int n,m,i,j,t=0;

    cin>>n;
    int pile[n],lebel[n];
    for(i=0;i<n;i++){
        cin>>pile[i];
        t+=pile[i];
        lebel[i]=t;
    }

    cin>>m;
    int juicy[m];
    for(i=0;i<m;i++) cin>>juicy[i];

    for(j=0;j<m;j++){
        i=bin_search(lebel,n-1,juicy[j]);
        cout<<i+1<<endl;
    }
    return 0;
}
