#include <stdio.h>
#include <math.h>
int main(){
	int i,j,N,X=0,Y=0,m,t,mid=0;
	scanf("%d",&N);
	int x[N],y[N];
	for(i=0;i<N;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	
	for(i=0;i<N-1;i++){  
        for(j=0;j<N-i-1;j++){  
            if(y[j]>y[j+1]){  
                t=y[j];  
                y[j]=y[j+1];  
                y[j+1]=t;     
            }  
        }  
    }  
	mid=N/2;
	
	for(i=0;i<N;i++){
		Y+=abs(y[i]-y[mid]);
	}
	
	for(i=0;i<N-1;i++){  
        for(j=0;j<N-i-1;j++){  
            if(x[j]>x[j+1]){  
                t=x[j];  
                x[j]=x[j+1];  
                x[j+1]=t;     
            }  
        }  
    }  
    for(i=0;i<N;i++){
		x[i]-=i+1;
	}
	
	for(i=0;i<N-1;i++){  
        for(j=0;j<N-i-1;j++){  
            if(x[j]>x[j+1]){  
                t=x[j];  
                x[j]=x[j+1];  
                x[j+1]=t;     
            }  
        }  
    }  
	for(i=0;i<N;i++){
		X+=abs(x[i]-x[mid]);
	}
	printf("%d\n",X+Y);
return 0;
}
