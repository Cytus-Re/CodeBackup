#include <stdio.h>
int main()
{double t;
char a;
scanf("%c",&a);
scanf("%lf",&t); 
switch (a)
{
case 67:printf("The Centigrade is %.2lf\n",t=(t-32)*5/9);break;
default:printf("The Fahrenheit is %.2lf\n",t=(t*9/5)+32);
}
return 0;
}
