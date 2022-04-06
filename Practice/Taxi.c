#include<stdio.h>

int main(){
    int n,one,two,three,four,temp,i,count;
    one=two=three=four=count=0;
    scanf("%d",&n);
    int students[n];
    for(i=0;i<n;i++) {
        scanf("%d",&students[i]);
        switch(students[i]){
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
        }
    }
    count=count+four;
    if(three>one) {
        count=count+three;
        one=0;
    }
    else if(three<one){
        count+=three;
        one-=three;
        three=0;
    }
    else if(three==one){
        count+=three;
        three=one=0;
    }
    temp=(two*2)+one;
    if(temp%4==0) count+=temp/4;
    else if(temp%4!=0) count+=(((int)(temp/4))+1);
    printf("%d\n",count);

    return 0;
}
