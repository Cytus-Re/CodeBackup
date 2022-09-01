#include <stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int k=0,i=0,t=0,num=0;
	for(k=1;k<=2*n-1;k++){
		t=(k<=n?k:2*n-k); 
		for(i=1;i<=t;i++){
			if(k<=n)num=1+n-k+(n+1)*(i-1);
			else num=1+(k-n)*n+(i-1)*(n+1);
			printf("%3d",num);
		}
		printf("\n");
	}
	return 0;
} 
