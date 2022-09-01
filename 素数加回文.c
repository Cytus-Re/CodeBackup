#include <stdio.h>
#include <math.h>
int isPrime(int x)
{
	int i,ret=1;
	for(i=2;i<x;i++) {
		if(x%i==0) {
			ret=0;
			break;
		}
	}
	return ret;
}

int count(int x){
	int cnt=0;
	while(x>0){
		x/=10;
		cnt++;
	}
	return cnt;
}
int isPalin(int x){
	int ret=1,cnt=1,n,m=0,t1=0,t2=0,X=0;
	n=pow(10,count(x)-1);
	m=count(x)/2;
	while(cnt<=m){
		t1=0;
		t2=0;
		X=x;
	    cnt++;
		t1=X/n;
		t2=X%10;
		if(t1!=t2){
			ret=0;
			break;
		}
		x%=n;
		x/=10;
		n/=100;
	}
	return ret;	
}
int main(){
	int a,b,i=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		if(isPrime(i)&&isPalin(i)){
			printf("%d\n",i);
		}
	}
	return 0; 
}
