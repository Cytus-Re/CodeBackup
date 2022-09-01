#include <stdio.h>
int main(){
	int n,lap,k,i,j,num=0,pre=0,m,sum=0,l;
	scanf("%d",&n);
	n%2==0?(m=n/2):(m=(n+1)/2);
	l=n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(lap=1;lap<=m;lap++){
				lap!=1?(pre+=4*l-4):(pre=0);
				l=n-2*(lap-1);
				if(i==lap||j==n+1-lap||i==n+1-lap||j==lap){
					if(i==lap){
					sum=j-lap+1;break;}
					
					if(j==n+1-lap){
					sum=l+i-lap;break;}
					
					if(i==n+1-lap&&j!=lap){
					sum=2*(l-1)+n-j-lap+2;break;}
					
					if(j==lap&&i!=lap){
					sum=3*(l-1)+n-i-lap+2;break;}
				}
				
			}
			num=sum+pre;
			printf("%3d",num);
			sum=0;
		}
		printf("\n");
	}
}
