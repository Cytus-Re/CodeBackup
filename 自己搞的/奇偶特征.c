#include <stdio.h>
int main()
{
int a,b,count=0,result=1;
scanf("%d",a);
while (a>0)
{
b=a%10;
count++;
b%2==count%2?result++:result;
result*=2;
a/=10;
}
printf("%d",result);
return 0;
}
