#include<cstdio>

int main(){
    int cost,coin,sum,num;
    scanf("%d %d",&cost,&coin);
    sum=cost,num=1;

    while(1){
        if(!(sum%10) || (sum%10)==coin){
            printf("%d\n",num);
            break;
        }
        else {
            sum+=cost;
            num++;
        }
    }
    return 0;
}
