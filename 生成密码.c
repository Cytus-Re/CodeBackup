#include <stdio.h>
int isPrime(int x){
	int i,ret=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
int main(){
	int y,m,d,a,b,c;
	scanf("%d,%d,%d",&y,&m,&d);
	a=y+m+d;
	int i;
	for(i=a-1;i>1;i--){
		if(isPrime(i))break;
	}
	b=i;
	int j;
	for(j=a+1;j<2*a;j++){
			if(isPrime(j))break;
	}
	c=j;
	printf("%d%d\n",b,c);
	return 0;
}
