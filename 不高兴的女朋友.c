#include <stdio.h>
int main(){
	int i=0,a=0,b=0,cnt=0,w=0,c=0,m=0;
	for(i=1;i<=7;i++){
		scanf("%d %d",&a,&b);
		cnt++;
		c=a+b;
		if(c<10)continue;
		else {
			if(c>m){
				m=c;
				w=cnt;
			}
		}
	}
	printf("%d\n",w);
	return 0;
} 
