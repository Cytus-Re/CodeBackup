#include <stdio.h>
#include <math.h>
int main(){
	unsigned long long int n=0;
	scanf("%lld",&n);
	printf("n=%lld\n",n);
	unsigned long long int i=0,a[1000]={0},k=0;
	for(i=1;i<=n;i++){
		if(sqrt(i)==(int)sqrt(i)){
			printf("k=%lld i=%lld \n",k,i);
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<k;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
