#include<stdio.h>

int main(){
    int tc,num,zero,temp;
    scanf("%d",&tc);
    while(tc--) {
        scanf("%d",&num);
        zero=num/5;
        temp=25;
        while(1){
            if(num/temp==0) break;
            else{
                zero=zero+(num/temp);
                temp*=5;
            }
        }
        printf("%d\n",zero);
    }
    return 0;
}
