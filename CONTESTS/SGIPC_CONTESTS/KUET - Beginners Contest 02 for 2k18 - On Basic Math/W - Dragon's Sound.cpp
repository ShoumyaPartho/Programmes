#include<stdio.h>

int time[1010];

int main(){
    int a,b,c,d,m,p,g,i;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    m=0;
    for(i=1;i<=1005;i++){
        m++;
        time[i]++;
        if(m==a) {
            i+=b;
            m=0;
        }
    }
    m=0;
    for(i=1;i<=1005;i++){
        m++;
        time[i]++;
        if(m==c) {
            i+=d;
            m=0;
        }
    }

    for(i=0;i<3;i++) {
        scanf("%d",&p);
        if(time[p]==2) printf("both\n");
        else if(time[p]==1) printf("one\n");
        else printf("none\n");
    }
    return 0;
}
