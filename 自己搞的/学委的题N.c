#include <stdio.h>
int main(){
	int n,a[1000];
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k=0,cnt[1000]={0};
	for(i=0;i<n;i++){
		if(a[i]+1==a[i+1])cnt[k]++;
		else if(cnt[k]!=0) k++;
	}
	int m=0;
	for(i=0;i<k;i++){
		if(cnt[i]>m)m=cnt[i];
	}
	printf("%d\n",m+1);
	return 0;
} 
