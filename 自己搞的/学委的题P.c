#include <stdio.h>
int isPrime(int x){
	int i=0,ret=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
int main(){
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=4;i<=n;i+=2){
	int x,y;
	for(x=2;x<=i/2;x++){
		y=i-x;
		if(isPrime(x)&&isPrime(y)){
			printf("%d=%d+%d\n",i,x,y);
			break; 
		}
	}
}
return 0;
} 
