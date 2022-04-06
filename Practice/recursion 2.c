#include<stdio.h>

int l2(int p,int y)
{
    if(p>y)
    {
        return;
    }
    printf("1 ");
    l2(p+1,y);
}

int loop(int y, int x)
{
    if(y>x)
    {
        return;
    }
    l2(1,y);
    printf("\n");
    loop(y+1,x);
}
int main()
{
    int x;
    scanf("%d",&x);
    loop(1,x);
}
