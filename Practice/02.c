#include<stdio.h>
#include<string.h>

int main(){
    int tc,mod,temp,i;
    char num[105];
    scanf("%d",&tc);
    while(tc--){
        scanf("%s",num);
        mod=0;
        for(i=0;i<strlen(num);i++){
            mod=(mod*10)+((int)num[i]-'0');
            mod%=2;
        }
        if(mod==0) printf("even\n");
        else printf("odd\n");
    }
    return 0;
}
