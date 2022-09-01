#include <stdio.h>
#include <math.h> 
int main(){
int i,j,n,k1=0,k2=0,k,m,t,f=0;
scanf("%d",&n);
int XL[n],XR[n],Y[n];
m=pow(2,n+2);
int xl=1,y=1,xr=m;
for(j=1;j<=m;j++){
	for(i=1;i<=m;i++){
		xl=1;y=1;xr=m;
		for(t=n;t>=0;t--){
		if(i==xl&&j==y){XL[k1]=xl;Y[k1]=y;k1++;}
		if(i==xr&&j==y){XR[k2]=xr;Y[k2]=y;k2++;}
		xl+=pow(2,t);y+=pow(2,t+1);xr=m-xl+1;
	}
}
}
//printf("XR=%d",XR[0]);	
for(j=1;j<=m;j++){
	for(i=1;i<=m;i++){
		for(k=0;k<=n;k++){
			if((i==XL[k]&&j==Y[k])||(i==XR[k]&&j==Y[k]))f=1;
			else if((j==m&&i==1)||(j==m&&i==m))f=1;
			else if(j==Y[k]&&(i>XL[k]&&i<XR[k]))f=2;
			else if(j==m&&(i==XL[k]||i==XR[k]))f=1;
	 		else if(j==m&&i!=XL[k]&&i!=XR[k])f=2;
	 		else if((i==XL[k]||i==XR[k])&&(j>Y[k]&&j<m))f=3;
	 	    else if((j>Y[k]+1&&j<(pow(2,n+1-k)))&&(i==(pow(2,n+2-k))-j+2))f=4;
			else if((j>Y[k]+1&&j<(pow(2,n+1-k)))&&(i==pow(2,n+2-k)-((pow(2,n+2-k))-j+2)))f=5;
		}
		switch(f){
			case 0:printf(" ");break;
			case 1:printf("+");break;
			case 2:printf("-");break;
			case 3:printf("|");break;
			case 4:printf("/");break;
			case 5:printf("\\");break;
		}
		f=0;
	}
	printf("\n");
}	
	
	
return 0;	
}
