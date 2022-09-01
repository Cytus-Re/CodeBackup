/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
int main()
{
	int n, count( );
	scanf("%d", &n);
	printf("%d\n", count (n, n-1));
	return 0;
}


int count( int n, int m )
{	int ret=0;
	if(n<1||m<1)ret=0; 
	else if(n==1||m==1)ret=1;
	else if(n<m)ret=count(n,n);
	else if(n==m)ret=count(n,m-1)+1;
	else ret=count(n-m,m)+count(n,m-1);
	return ret;
}


/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
