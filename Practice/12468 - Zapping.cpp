#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        if(a==-1 &&b==-1) break;
        if(b<a) swap(a,b);
        if((b-a)<(99-b+a)) cout<<b-a<<endl;
        else if((b-a)>(99-b+a)) cout<<99-b+a+1<<endl;
        else cout<<b-a<<endl;
    }
    return 0;
}
