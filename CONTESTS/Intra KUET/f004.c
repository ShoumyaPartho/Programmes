#include<stdio.h>
#include<math.h>

int is_prime(int a, int b) {
    int i,p,j,r=0,temp;

    if(b==1) return -1;

    for(i=b;i>=a;i--) {
        temp=ceil(sqrt(i));
        for(j=2;j<=temp;j++) {
            if(i%j==0) {
                r=-1;
                break;
            }
            else r=i;
        }
        if (r==i) return r;
    }
    if(r!=i) return -1;
}

int main() {

    int t,s,e,r;
    scanf("%d",&t);

    while(t--) {
        scanf("%d %d",&s,&e);
        r=is_prime(s,e);
        printf("%d\n",r);
    }
}
