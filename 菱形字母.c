#include <stdio.h>
int main()
{
	char ch,c;
	int i,k,n;
	scanf("%c %d",&ch,&n);
	for(k=1;k<=2*n-1;k++){
		if(k<=n){
			for(i=1;i<=n+k-1;i++){
				if(i==n-k+1||i==n+k-1){
					c=ch+k-1;
					printf("%c",c);
				}
				else printf(" ");
			}
		}
		else 
		for(i=1;i<=3*n-k-1;i++){
			if(i==k+1-n||i==3*n-k-1){
				c=ch+2*n-1-k;
				printf("%c",c);
			}
		else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

