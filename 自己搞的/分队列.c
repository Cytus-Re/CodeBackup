#include <stdio.h>
int main()
{
int a,i;
scanf("%d",&a);
a%2==0?a--:a;
for(i=1;i<=a-2;i=i+2)
{
printf("%d ",i);
}
printf("%d",a);
return 0;
} 
