 #include<stdio.h>

 int main(){
    char c1='A',c2='B',c3='C',*a,*b,*c;
    a=&c1,b=&c2,c=&c3;
    printf("%c\n%c\n%c",*a,*b,*c);
    return 0;
 }
