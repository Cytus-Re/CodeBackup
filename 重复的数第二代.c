#include <stdio.h>
unsigned long long int a[100000];
int main(){
	long int m=0;
	int exit=0;
	int n=0;
	int i=0,j=0,l=0; 
	scanf("%d",&n);
	for(l=0;l<n;l++){
		scanf("%ld",&m);
		for(j=0;j<m;j++){
			scanf("%llu",&a[j]);
		}
		//for(k=0;k<m;k++){
		//printf("%s",str[k]);
	//}
	for(i=0;i<m;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]&&(i!=j)){
				printf("%llu\n",a[i]);
				exit=1;break;
			}
			
		}
		if(exit)break;
	}
	m=0;exit=0;
	j=0;	
}
return 0;
}
