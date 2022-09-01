#include <stdio.h>  
int main(){  
int n,i,j,k,t,m,l;  
scanf("%d",&n);  
int a[n];  
for(i=0;i<n;i++){  
    scanf("%d",&a[i]);  
}
for(j=0;j<n-1;j++){
	m=j;
	for(k=j+1;k<n;k++){
		if(a[m]>a[k]){
			m=k;
		}
		if(j!=m){
			t=a[m];
			a[m]=a[j];
			a[j]=t;
		}
	}
}
for(l=0;l<n;l++){
	printf("%d\n",a[l]);
}

return 0;
}  
