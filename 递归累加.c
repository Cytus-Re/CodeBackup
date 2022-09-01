#include <stdio.h>
int add(int a, int b)
{
	int i=0,sum=0;
	i=b;
	if(i==a)
		return a;
	else
		sum=b+add(a,b-1);
	return sum;
}
int main()
{

	int a=0,b=0,sum=0;
	scanf("%d %d",&a,&b);
	sum=add(a,b);
	printf("The sum from %d to %d is %d.\n",a,b,sum);
	return 0;
}

