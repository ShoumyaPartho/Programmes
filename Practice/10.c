#include<stdio.h>

int main(){
    int tc,opposite,current,left;
    double crr,rrr;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d %d %d",&opposite,&current,&left);
        crr=(current*1.0)/((300-left)*1.0/6.0);
        if(opposite-current<0) rrr=0.00;
        else rrr=(opposite-current+1)*1.0/(left*1.0/6.0);
        printf("%0.2lf %0.2lf\n",crr,rrr);
    }
    return 0;
}
