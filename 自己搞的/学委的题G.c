#include <stdio.h>
int main(){
	long long int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	long long int max=0,min=0,i=0;
	max=a>b?a:b;
	max=max>c?max:c;
	min=a<b?a:b;
	min=min<c?min:c;
	for(i=2;i<=min;i++){
		if(max%i==0&&min%i==0){
			max/=i;
			min/=i;
		}
	}
	printf("%d/%d\n",min,max);
	return 0;
}
