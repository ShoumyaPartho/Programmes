#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
    long long int i,j,cnt=0,temp_cnt,temp,it,jt;
    while(scanf("%lld %lld",&i,&j)!=EOF){
        it=i,jt=j;
        if(j<i) swap(i,j);
        cnt=0;
        for(int x=i;x<=j;x++) {
            temp_cnt=1;
            temp=x;
            while(temp!=1) {
                if(temp%2==0) {
                    temp_cnt++;
                    temp/=2;
                }
                else if(temp%2==1) {
                    temp_cnt++;
                    temp=(3*temp)+1;
                }
            }
            if(temp_cnt>cnt) cnt=temp_cnt;
        }
        cout<<it<<" "<<jt<<" "<<cnt<<endl;
    }
    return 0;
}
