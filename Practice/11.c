#include<stdio.h>

int main(){
    int tc,num;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&num);
        switch(num){
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("2\n");
                break;
            case 3:
                printf("6\n");
                break;
            case 4:
                printf("24\n");
                break;
            case 5:
                printf("120\n");
                break;
            case 6:
                printf("720\n");
                break;
            case 7:
                printf("5040\n");
                break;
            case 8:
                printf("40320\n");
                break;
            case 9:
                printf("362880\n");
                break;
            case 10:
                printf("3628800\n");
                break;
            case 11:
                printf("39916800\n");
                break;
            case 12:
                printf("479001600\n");
                break;
            case 13:
                printf("6227020800\n");
                break;
            case 14:
                printf("87178291200\n");
                break;
            case 15:
                printf("1307674368000\n");
                break;
        }
    }
    return 0;
}
