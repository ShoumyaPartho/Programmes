#include<stdio.h>

int main(){
    int tc,t,n;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d",&n);

        if(n>=80) printf("Case %d: A+\n",t);
        else if (n>=75) printf("Case %d: A\n",t);
        else if (n>=70) printf("Case %d: A-\n",t);
        else if (n>=65) printf("Case %d: B+\n",t);
        else if (n>=60) printf("Case %d: B\n",t);
        else if (n>=55) printf("Case %d: B-\n",t);
        else if (n>=50) printf("Case %d: C\n",t);
        else if (n>=45) printf("Case %d: D\n",t);
        else printf("Case %d: F\n",t);
    }
}
