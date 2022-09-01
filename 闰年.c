#include <stdio.h>
int main()
{int a;
scanf("%d",&a);
a%4==0&&a%100!=0||a%400==0?printf("%d is a leap year.\n",a):printf("%d is not a leap year.\n",a);
return 0;
}
