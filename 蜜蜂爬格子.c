#include <stdio.h>
long long int f(int x)
{
	long long int ret=1;
	int i;
	if(x!=0) {
		for(i=x; i>0; i--) {
			ret*=i;
		}
	}
	else ret=1;
	return ret;
}
int main()
{
	int a,b,c;
	int i,j,k;
	unsigned long long int total=0;
	scanf("%d %d",&a,&b);
	c=b-a;
	for(i=0; i<=(c/2);i++){
		j=c-2*i;
		k=i+j;
		total+=f(k)/(f(i)*f(j));
	}
	printf("%llu\n",total);
	return 0;
}
