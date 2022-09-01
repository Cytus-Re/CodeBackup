#include <stdio.h>
int main(){
	int n=0,k=0;
	scanf("%d %d",&n,&k);
	int sum=0;
	while(n>0){
		int temp1=0,temp2=0; 
		if(n>=k){
		temp1=n%k;
		temp2=n/k;
		sum+=temp2*k;
	}
	else sum+=n;	
		n=temp1;
		n+=temp2;
	}
	printf("%d\n",sum);
	return 0;
} 
