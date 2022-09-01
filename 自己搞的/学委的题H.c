#include <stdio.h>
int find(int* b,int x);
int main()
{
	int n=0;
	int a[105],b[105];
	scanf("%d",&n);
	int i=0,j=0;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	int m=0,k=0;
	for(i=1; i<105; i++) {
		b[i]=-1;
	}
	for(i=0; i<n; i++) {
		if(find(b,a[i]))continue;
		else {
			b[k++]=a[i];
		}
	}

	for(i=0; i<k; i++){
		m=i;
		for(j=i;j<k;j++){
			if(b[j]<b[m])m=j;
		}
			if(m!=i){
				int temp=0;
				temp=b[i];
				b[i]=b[m];
				b[m]=temp;
			}
	}
	printf("%d\n",k);
		for(i=0; i<k; i++) {
			printf("%d ",b[i]);
			//else printf("%d",b[i]);
		}
	//printf("\n");
	return 0;
}
int find(int* b,int x)
{
	int i=0,ret=0;
	for(i=0; b[i]!=-1; i++) {
		if(b[i]==x) {
			ret=1;
			break;
		}
	}
	return ret;
}

