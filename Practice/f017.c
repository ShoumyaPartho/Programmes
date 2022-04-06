#include<stdio.h>
#include<string.h>

int rev(char str[],int n){
    printf("%c",str[n]);
    if(n==0) return 0;
    rev(str,n-1);
}

int main(){
    char str[110];
    printf("Please enter your name: ");
    scanf("%s",str);
    int l=strlen(str);
    printf("Your reverse name is: ");
    rev(str,l-1);
}
