#include <stdio.h>
int main()
{
double x,y,z,d,i1,i2,i3,i4,total1=1,total2=1,total3=1,total4=1,result;
scanf("%lf%lf%lf",&x,&y,&z);
d=x+y+z;
for(i1=d;i1>0;i1--)
{
	total1=total1*i1;
}
for(i2=x;i2>0;i2--)
{
	total2=total2*i2;
}
for(i3=y;i3>0;i3--)
{
	total3=total3*i3;
}
for(i4=z;i4>0;i4--)
{
	total4=total4*i4;
}
result=total1/(total2*total3*total4);
printf("%.0lf\n",result);
return 0; 


}
