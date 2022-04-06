#include<cstdio>

int main(){
    long long int a,b,c,q;
    scanf("%lld",&q);

    while(q--){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",(a+b+c)/2);
    }
    return 0;
}
