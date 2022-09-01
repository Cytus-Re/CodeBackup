#include <stdio.h>
int main()
{int cnt=0,K=0,M=0,P=0,n=0,m=0,t,a=0;
while(scanf("%d %d",&n,&m) !=EOF){
	a=0;
for(K=n;K>=0;K--){
	for(M=n;M>=0;M--){
		P=n-K-M;
		t=20*K+12*M+8*P;
		if(t==m&&P>=0)
		{cnt++;
		a=1;
		if(cnt==1){
		printf("KFC  McDonald  PissaHut\n");
		}
		printf("%d %d %d\n",K,M,P);
		}
	}
	}
	if(a==0)printf("No Solution!\n");
}
return 0;
 } 
