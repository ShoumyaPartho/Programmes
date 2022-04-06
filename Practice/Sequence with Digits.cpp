#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int t,a1,k,temp,t2,ara[150],zero,indx,mx,mn;
    cin>>t;

    while(t--){
        cin>>a1>>k;
        indx=1;

        for(int i=0;i<150;i++){
            temp=a1,mx=0,mn=9;
            ara[indx]=temp;
            while(temp){
                t2=temp%10;
                temp/=10;
                mx=max(t2,mx),mn=min(t2,mn);
            }
            if(mn==0){
                if(k>indx){
                    cout<<ara[indx]<<endl;
                    break;
                }
                else{
                    cout<<ara[k]<<endl;
                    break;
                }
            }
            a1+=(mx*mn);
            indx++;
        }
    }
    return 0;
}
