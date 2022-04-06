#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    long long int n,mod;
    string num;

    while(scanf("%lld",&n)!=EOF)
    {
        while(1)
        {
            num.push_back('1');
            mod=0;
            for(int i=0; i<num.length(); i++)
            {
                mod*=10;
                mod+=1;
                mod%=n;
            }
            if(mod==0)
            {
                cout<<num.length()<<endl;
                num.clear();
                break;
            }
        }
    }
    return 0;
}
