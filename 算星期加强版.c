#include <stdio.h>
int main()
{int y,m,d,W; 
scanf("%d%d%d",&y,&m,&d);
  if ((m<1||m>12)&&(d>31||d<1)) 
printf("month and day are wrong.\n");
  else if(m>12||m<1)
printf("month is wrong.\n");
  else if(m<13&&d>31||d<1)
printf("day is wrong.\n");
  else if(m<13&&d>30&&m==4||m==6||m==9||m==11)
printf("day is wrong.\n");
  else if(m==2&&(y%4==0&&y%100!=0||y%400==0?d>29:d>28))
printf("day is wrong.\n");
  //else if(m==2&&d>29)
//printf("day is wrong.\n");
  else if (m==1||m==2) 
   {
   m=m+12;
   y=y-1;
W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
printf("%d\n",W+1>6?0:W+1);}
  else 
  {
  W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
printf("%d\n",W+1>6?0:W+1);}
return 0;
}
