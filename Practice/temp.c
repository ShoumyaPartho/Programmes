#include<stdio.h>

int main(){
    int num,ara[6] = {2,9,5,69,21,109},flag=0,idx,i;
    printf("Please enter the number: ");
    scanf("%d",&num);

    for(i=0;i<6;i++){
        if(ara[i]==num){
            flag = 1;
            idx = i;
            break;
        }
    }

    if(flag)
        printf("Number found at index: %d\n",idx);
    else
        printf("Number not found in the array\n");

    return 0;
}
