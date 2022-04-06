#include<stdio.h>
int r2(int p,int q,int r)
{
    if(q>r)
    {
        return;
    }
    int z=p*q;
    printf("%d X %d = %d\n",p,q,z);
    r2(p,q+1,10);
}
int r1(int x,int y)
{
    if(x>y)
    {
        return;
    }
    r2(x,1,10);
    printf("\n");
    r1(x+1,y);
}
int main()
{
    int a;
    scanf("%d",&a);
    r1(1,a);
}
