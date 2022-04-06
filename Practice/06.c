#include<stdio.h>

int main(){
    int tc,sum;
    char num[6];
    scanf("%d",&tc);
    while(tc--){
        scanf("%s",num);
        sum=(int)(num[0]-'0')+(int)(num[4]-'0');
        printf("Sum = %d\n",sum);
    }
    return 0;
}
