#include <stdio.h>
int main(){
	int w=0,n,sum=0,j=0,k=0;
	int p[30000];
	scanf("%d",&w);
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
		//printf("     %d\n",n);
	}
	for(i=1;i<=n;i++){
		k=i;
		sum=w;
		for(j=0;j<i;j++){
			sum+=p[j]*k;
			//printf("%d+=%d*%d  ",sum,p[j],k);
			k--;
		}
	if(i!=n)printf("%d ",sum);
	else printf("%d\n",sum);
	}
return 0;
}
