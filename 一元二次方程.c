#include <stdio.h>
#include<math.h>
int main()
{
double d;
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c; 
if (a==0&&b==0)
printf("Input error!\n");
else if (a==0&&b!=0)
printf("x=%.6lf\n",0==-(double)c/b ? 0 : -(double)c/b);
else if(b!=0&&d<0)
printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",(-b)/(2.0*a),sqrt(-d)/(2.0*a),(-b)/(2.0*a),sqrt(-d)/(2.0*a));
else if(b==0&&d<0)
printf("x1=%.6lfi\nx2=%.6lfi\n",sqrt(-d)/(2.0*a),-(sqrt(-d)/(2.0*a)));
else if(a!=0&&d==0)
printf("x1=x2=%.6lf\n",(double)(-b)/(2*a));
else if(a!=0&&d>0)
printf("x1=%.6lf\nx2=%.6lf\n",(((-b)+sqrt(d))/(2*a)),(((-b)-sqrt(d))/(2*a)));
return 0;
}
