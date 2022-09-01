#include <stdio.h>
# include<math.h> 
int main()
{
int fz1,fm1,fz2,fm2,i,a,b,a1,b1,t;
scanf("%d%d%d%d",&fz1,&fm1,&fz2,&fm2);
a=fm1*fm2; 
b=fm2*fz1+fm1*fz2;
a1=abs(a);
b1=abs(b);
if(a*b>0)
{
a=a1;
b=b1;}
while (b1!=0)
{
 t=a1%b1;
 a1=b1;
 b1=t;
}
a=a/a1;
b=b/a1;

if(a*b<0)
//printf("enter1");
{
a=a;
b=b;
}
if(b>0&&a<0)
//printf("enter2");
{
b=-b;
a=-a;}
b==0?printf("0\n"):printf("%d/%d\n",b,a);
return 0;
 } 
