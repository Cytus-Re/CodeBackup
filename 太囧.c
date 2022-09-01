#include <stdio.h>
#include <math.h> 
int main(){
long long int n,k,K=0,K1,i=0,I,I1,m=1,H,H1;
scanf("%lld",&n);
K=pow(2,n+2);
I=pow(2,n+2);
H=K/2;
printf("K=%d,I=%d,H=%d\n",K,I,H);
for(k=1;k<=K;k++){
	for(i=1;i<=I;i++){
		
		if(k<=H){
			if(k==1&&(i==1||i==I))printf("+");
			else if(k==1)printf("-");
			else if((k>2&&k<H)&&(i==H-k+2))printf("/");
			else if((k>2&&k<H)&&(i==I-(H-k+2)))printf("\\");
			else if(i==1||i==I)printf("|");
			else printf(" ");
		}
		if(k>H){
			for(m=n;m>=1;m--){
		K1=pow(2,m+2);
 		I1=pow(2,m+2);
		H1=K1/2;
			}
			} 
		}
	
	printf("\n");
}
return 0; 
}

