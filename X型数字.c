#include <stdio.h>
int main()
{
	char ch;
	int i,k,a,n;
	ch=getchar();
	n=(int)ch-48;
	a=n+1;if(a>9)a-=9;
	if(ch>='1'&&ch<='9') {
		for(k=1; k<=2*n-1; k++) {
			if(k<=n) {
				for(i=1; i<=2*n-k; i++) {
					if(i==k||i==2*n-k)printf("%d",k);
					else printf(" ");
				}
			} else if(k>n) {
				for(i=1; i<=k; i++) {
					if(i==k||i==2*n-k) {
						printf("%d",a);
					} else printf(" ");
				}
				a++;
				if(a>9)a-=9;
			}
			printf("\n");
		}
	}
	else printf("input error\n");
	return 0;
}
