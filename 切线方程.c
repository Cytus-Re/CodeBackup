#include <stdio.h>
int main()
{double m,n;
int a,b; 
scanf("%d%d%lf%lf",&a,&b,&m,&n);
if ((m*m)/a+(n*n)/b!=1)
printf("Input error!\n");
else if(m==0)
printf("y=%.6lf\n",b/n);
else if(n==0)
printf("x=%.6lf\n",a/m);
else
b/n>0?printf("y=%.6lfx+%.6lf\n",-(b*m)/(a*n),b/n):printf("y=%.6lfx%.6lf\n",-(b*m)/(a*n),b/n);
return 0;
}
