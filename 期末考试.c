#include <stdio.h>
int main()
{
	double s;
	int n;
	scanf("%d %lf",&n,&s);
	int b,t,x;
	int fail=1;
	int cnt=1;
	for(b=s/10; b>=0; b--) {
		for(t=s/5; t>=0; t--) {
			x=n-b-t; 
			if(10*b+5*t+2.5*x==s&&x>=0) {
				printf("%d:%d,%d,%d\n",cnt++,b,t,x);
				fail=0;
			}
		}
	}
	if(fail)printf("Error!\n");
	return 0;
}
