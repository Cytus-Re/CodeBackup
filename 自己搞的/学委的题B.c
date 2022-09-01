#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=0,a[10005]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				int t=0;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
} 
