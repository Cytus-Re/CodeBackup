#include <stdio.h>
int main()
{
int a,b,x,y,t;
scanf("%d%d",&a,&b);
x=a;y=b;
while (y!=0)
{
 t=x%y;
 x=y;
 y=t;
 printf("x=%d y=%d t=%d\n",x,y,t);
}
printf("GCD(%d,%d)=%d\n",a,b,x);
return 0;
 } 
