#include <stdio.h> 
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("The sum from %d to %d is %d.\n",a,b,((a+b)*(b-a+1))/2);
return 0;
}
