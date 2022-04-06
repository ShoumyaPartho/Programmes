#include<stdio.h>
#include<math.h>

int main() {

    long long int t,i,sq,n,d;

    scanf("%lld",&t);

    for(i=1;i<=t;i++) {
        scanf("%lld",&n);

        sq=ceil(sqrt(n));
        d=n-((sq-1)*(sq-1));

        if(sq%2==0) {
            if(d>sq) printf("Case %lld: %lld %lld\n",i,sq,(1+(sq*sq)-n));
            else printf("Case %lld: %lld %lld\n",i,d,sq);
        }
        else {
            if(d>sq) printf("Case %lld: %lld %lld\n",i,(1+(sq*sq)-n),sq);
            else printf("Case %lld: %lld %lld\n",i,sq,d);
        }
    }
    return 0;
}
