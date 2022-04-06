#include<stdio.h>
#include<string.h>

int main(){
    int tc,cnt;
    char num[10]="B";
    scanf("%d",&tc);
    while(tc--){
        cnt=0;
        while(!strcmp(num,'\n')){
            scanf("%s",num);
            cnt++;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
