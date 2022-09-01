#include <stdio.h>
int main()
{
int i,k,m,n,even=0,t,s,sum,i1,k1;
scanf("%d",&n);
for(k=1;k<=n;k++){
	for(i=1;i<=n;i++){
		m=i+k-1;
		even=(m%2==0?1:0); 
		if(m<=n){
			t=(m*(m-1))/2;
			if(even){
				s=m-i;
			}
			else{
				s=m-k;
			}
			sum=t+s+1;
			i==1?(printf("%2d",sum)):(printf(" %2d",sum));
		}
		else{
			m=2*n-m;
			i1=n+1-i;
			k1=n+1-k;
			t=(m*(m-1))/2;
			if(even){
				s=m-i1;
			}
			else{
				s=m-k1;
			}
			sum=n*n-t-s;
			printf(" %2d",sum);
		}
}
	printf("\n");
}
return 0;
}

