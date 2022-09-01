#include <stdio.h>
int main()
{int n,m,k,i;
	scanf("%d",&n);
	for(k=1;k<=n;k++){
	//	for(m=1;m<=n-k;m++){
	//	printf(" ");	
	//	}
		for(i=1;i<=2*n-k;i++){
		if(k==1||i==k||i==2*n-k)
		{printf("*");}
		else
		{printf(" ");}
		}
		printf("\n");
	}
	return 0;
}
