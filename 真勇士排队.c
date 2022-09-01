#include <stdio.h>
#include <math.h>
int main(){
	int i,j,N,a,b,X=0,Y=0,k=0,cnt=0,m,t,mid=0;
	scanf("%d",&N);
	int x[N],y[N];
	for(i=0;i<N;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
//Ñ¡ÔñÅÅÐò 
	for(i=0;i<N-1;i++){
		m=i;
		for(j=i+1;j<N;j++){
			if(y[j]<y[m]){
				m=j;
			}
			if(i!=m){
			t=y[m];
			y[m]=y[i];
			y[i]=t;	
			}
		}	
	}
//µ÷ÊÔ 
	for(i=0;i<N;i++){
		printf("%d\n",y[i]);
	}
	
	mid=N/2;
	
	for(i=0;i<N;i++){
		Y+=abs(y[i]-y[mid]);
	}
	
	for(i=0;i<N;i++){
		x[i]-=i;
	}
	
	
	for(i=0;i<N-1;i++){
		m=i;
		for(j=0;j<N;j++){
			if(x[j]<x[m]){
				m=j;
			}
			if(i!=j){
			t=x[i];
			x[i]=x[j];
			x[j]=t;	
			}
		}
	}
	
	for(i=0;i<N;i++){
		X+=abs(x[i]-x[mid]);
	}
	//printf("%d\n",X+Y);
return 0;
}
