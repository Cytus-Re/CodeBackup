#include <stdio.h>
int main(){
	int n=0,i=0;
	scanf("%d",&n);
	int x[10000],y[10000],a[10000],b[10000];
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&x[i],&y[i],&a[i],&b[i]);
	}
	int X=0,Y=0,ans=-1;
	scanf("%d %d",&X,&Y);
	for(i=n-1;i>=0;i--){
		//printf("x=%d y=%d x+a=%d y+b=%d i=%d\n",x[i],y[i],x[i]+a[i],y[i]+b[i],i);
		if((X>=x[i]&&X<=x[i]+a[i])&&(Y>=y[i]&&Y<=y[i]+b[i])){
			ans=i+1;
			break;
		}
	}
	printf("%d\n",ans);
	return 0;
} 
