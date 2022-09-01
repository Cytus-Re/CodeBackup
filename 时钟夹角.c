#include <stdio.h>
int main()
{int h,m;
double a,x,y,z;
scanf("%d%d",&h,&m);
x=h*30+m*0.5;
y=m*6;
z=x>y?(x-y):(y-x);
printf("At %d:%02d the angle is %.1lf degrees.\n",h,m,z>=180.0?360.0-z:z);
return 0;
} 
