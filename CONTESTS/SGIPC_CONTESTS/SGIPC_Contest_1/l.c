#include<stdio.h>

int main() {

    int t,n1,n2,st,s,rev1,rev2,rst;

    scanf("%d",&t);

    while(t--) {
        scanf("%d %d",&n1,&n2);

        rev1=0;
        while(n1!=0) {
            rev1= rev1*10;
            rev1= rev1+ (n1%10);
            n1= n1/10;
        }
        rev2=0;
        while(n2!=0) {
            rev2= rev2*10;
            rev2= rev2+(n2%10);
            n2= n2/10;
        }
        st= rev1+rev2;
        rst=0;
        while(st!=0) {
            rst= rst*10;
            rst= rst+ (st%10);
            st= st/10;
        }
        printf("%d\n",rst);
    }
    return 0;
}
