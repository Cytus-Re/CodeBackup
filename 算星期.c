#include <stdio.h>
int main()
{int y,m,d,W; 
scanf("%d%d%d",&y,&m,&d);
if (m==1||m==2) 
   {
   m=m+12;
   y=y-1;} 
W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
printf("%d\n",W+1>6?0:W+1);
return 0;
}
