#include<stdio.h>

int main(){
    int n,num[4],i,j,c,d=0,temp;
    scanf("%d",&n);
    n++;
    temp=n;
    while(1) {
        d=0;
        c=0;
        for(i=3;i>=0;i--) {
            num[i]=temp%10;
            temp=temp/10;
        }
        for(i=0;i<3;i++) {
            for(j=i+1;j<4;j++) {
                if(num[i]==num[j]){
                    n+=1;
                    temp=n;
                    c=0;
                    d=1;
                    break;
                }
                else{
                    if(i==2 && j==3) {
                        c=1;
                        break;
                    }
                }
            }
            if(d) break;
            if(c) break;
        }
        if(c) break;
    }
    printf("%d\n",n);

    return 0;
}
