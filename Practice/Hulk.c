#include<stdio.h>

int main() {
    char ara1[]="I hate ",ara2[]="I love ",ara3[]="it ",ara4[]="that ";
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i%2==1) printf("%s",ara1);
        if(i%2==0) printf("%s",ara2);
        if(i==n) printf("%s",ara3);
        if(i!=n) printf("%s",ara4);
    }
    return 0;
}
