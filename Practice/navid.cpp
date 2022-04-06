#include<stdio.h>

int main(){
  int x,y;
  scanf("%d %d",&x,&y);

  if(x==0 && y==0)
    printf("point %c%d , %d%c is on the original point\n",'(',x,y,')');

  else if (x==0)
    printf("point %c%d , %d%c is on the y-axle\n",'(',x,y,')');

  else if (y==0)
    printf("point %c%d , %d%c is on the x-axle\n",'(',x,y,')');

  else if (x>0 && y>0)
    printf("point %c%d , %d%c is in quadrant I\n",'(',x,y,')');

  else if (x<0 && y>0)
    printf("point %c%d , %d%c is in quadrant II\n",'(',x,y,')');

  else if (x<0 && y<0)
    printf("point %c%d , %d%c is in quadrant III\n",'(',x,y,')');

  else if (x>0 && y<0)
    printf("point %c%d , %d%c is in quadrant IV\n",'(',x,y,')');

  return 0;
}
