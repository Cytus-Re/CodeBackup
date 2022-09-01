#include <stdio.h>
#include <math.h>
int search(int key,int a[],int length){
	int ret=0,i;
	for(i=0;i<length;i++){
		if(a[i]==key){
			ret=i;
			break;
		}
	}
	return ret;
} 


int min(int a[],int length){
	int min=100000,i;
	for(i=0;i<length;i++){
		if(a[i]<=min)min=a[i];
	}
	return min;
}

int main(){
	int i,N,a,b,X=0,Y=0,k=0,cnt=0,t=0,j=0,c=0;
	scanf("%d",&N);
	int x[N],y[N],Z[]={0},m[]={999};
	for(i=0;i<N;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			t=x[b];
			if(y[b]!=y[a]){
				Y=abs(y[b]-y[a]);
			}
			while (search(x[b],Z,sizeof(Z)/sizeof(Z[0]))){
				x[b]=t;
				cnt%2==0?(k=abs(k)+1):(k=-k);
				x[b]+=k;
				cnt++;
			}
				X=abs(x[b]-t);
				Z[c]=x[b];c++;
			m[j]=X+Y;j++;
		}
	}
	printf("%d",min(m,sizeof(m)/sizeof(m[0])));
}
