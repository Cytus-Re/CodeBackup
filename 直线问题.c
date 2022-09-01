#include <stdio.h>
int main(){
	int X1=0,X2=0,Y1=0,Y2=0;
	int x[100],y[100];
	int i,fail=1,n,A=0,B=0,C=0;
	scanf("%d,%d",&X1,&Y1);
	scanf("%d,%d",&X2,&Y2);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d,%d",&x[i],&y[i]);
	}
	A=Y2-Y1;
	B=X1-X2;
	C=X2*Y1-X1*Y2;
	for(i=0;i<n;i++){
		if(A*x[i]+B*y[i]+C==0){
		printf("%d,%d\n",x[i],y[i]);
		fail=0;
		}
	} 
if(fail)printf("NoOut.\n");
return 0;	
}
