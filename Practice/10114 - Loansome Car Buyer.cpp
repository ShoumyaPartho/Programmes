#include <stdio.h>

int main() {

    int m,n;
    double dp,da[101],p;

    while(scanf("%d %lf %lf %d",&m,&dp,&p,&n) && (m>=0)){
        int m1,now=0;
        double m2;

        while(n--) {
            scanf("%d %lf",&m1,&m2);
            for(int i=m1;i<101;i++) {
                da[i]=m2;
            }
        }

        double loanpayment=p/m,carval=(dp+p)*(1-da[0]),carloan=p;

        while(carval<carloan) {
            now++;
            carval=carval*(1-da[now]);
            carloan-=loanpayment;
        }
        printf("%d month",now);
        if(now!=1)  printf("s");
        printf("\n");
    }
}
