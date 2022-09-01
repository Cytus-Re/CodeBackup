#include <stdio.h>
#include <math.h>
int main(){
	int m=0,n=0;
	scanf("%d %d",&m,&n);
	int i=0,j=0,a[1000][100];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]); 
		}
	}
	int t=0,v=0;
	scanf("%d",&t);
	for(v=0;v<t;v++){
		int x=0,y=0,d=0,ans=0;
		scanf("%d %d %d",&x,&y,&d);
		x--;
		y--;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(abs(x-i)+abs(y-j)<=d){
						ans+=a[i][j];
					//	printf("ans=%d num=%d\n",ans,a[i][j]);
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
} 
