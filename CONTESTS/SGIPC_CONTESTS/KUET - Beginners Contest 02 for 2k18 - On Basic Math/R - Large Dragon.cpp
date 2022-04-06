#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int main(){
    long long int tc,t,divisor,mod,len,start;
    char dividend[500];
    cin>>t;
    for(tc=1;tc<=t;tc++){
        cin>>dividend>>divisor;

        divisor=abs(divisor);
        len=strlen(dividend);
        mod=0;

        if(dividend[0]=='-') start=1;
        else start=0;

        for(;start<len;start++){
            mod*=10;
            mod+= (int)(dividend[start]-'0');
            mod%=divisor;
        }
        if(mod) printf("Case %lld: not divisible\n",tc);
        else if(!mod) printf("Case %lld: divisible\n",tc);
    }
    return 0;
}
