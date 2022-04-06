#include<stdio.h>

int main(){
    int i=0,num=1000;
    while(num!=0){
        printf("%d\t",num);
        num--;
        i++;
        if(i==5) {
            printf("\n");
            i=0;
        }
    }
    return 0;
}
