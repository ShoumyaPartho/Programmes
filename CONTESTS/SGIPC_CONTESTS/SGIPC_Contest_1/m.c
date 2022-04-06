#include<stdio.h>

int main() {

    int i,j,k,t,l,m,n;

    scanf("%d",&n);

    for(i=0,k=n;i<=n;i++,k--) {
        for(j=0;j<=n;j++) {
            if(j<k) {
                printf("  ");
            }
            else if(j==k) {
                t=0;
                printf("%d",t);
            }
            else if(j>k && j<=n){
                t++;
                printf("%d",t);
                //continue;
            }
            if(j>=k && i!=0) printf(" ");
        }
        if(i>0) {
            l=t;
            for(m=n;m<n+i;m++) {
                l--;
                printf("%d",l);
                if(l!=0) printf(" ");
            }
        }

        printf("\n");
    }
    for(i=0,k=1;i<n,k<=n;i++,k++) {
        for(j=0;j<=n;j++) {
            if(j<k) printf("  ");
            else if(j==k){
                t=0;
                printf("%d",t);
            }
            else {
                t++;
                printf("%d",t);
            }
            if(j>=k && i!=n-1) printf(" ");
        }
        //printf("\n");
        l=t;
        for(m=n;m<(2*n)-k;m++) {
            l--;
            printf("%d",l);
            if(l!=0) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
