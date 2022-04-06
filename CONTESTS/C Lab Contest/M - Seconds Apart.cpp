#include<stdio.h>

int main(){
    int tc,t,n,year,month,day,hour,minute,second;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d",&n);
        printf("Case %d: ",t);
        if(n>=31104000){
            year=n/31104000;
            if(year==1) printf("%d year ",year);
            else if(year>1) printf("%d years ",year);
            n-=(year*31104000);
        }
        if(n>=2592000){
            month=n/2592000;
            if(month==1) printf("%d month ",month);
            else if(month>1) printf("%d months ",month);
            n-=(month*2592000);
        }
        if(n>=(86400)){
            day=n/86400;
            if(day==1) printf("%d day ",day);
            else if(day>1) printf("%d days ",day);
            n-=(day*86400);
        }
        if(n>=3600){
            hour=n/3600;
            if(hour==1) printf("%d hour ",hour);
            else if(hour>1) printf("%d hours ",hour);
            n-=(hour*3600);
        }
        if(n>=60){
            minute=n/60;
            if(minute==1) printf("%d minute ",minute);
            else if(minute>1) printf("%d minutes ",minute);
            n-=(minute*60);
        }
        if(n>0){
            second=n;
            if(n==1) printf("%d second",second);
            else if(n>1) printf("%d seconds",second);
        }
        printf("\n");
    }
    return 0;
}
