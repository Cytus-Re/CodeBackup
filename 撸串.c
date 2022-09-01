#include <stdio.h>
int main(){
	int M;
	int m,p,q,cnt=1,fail=1;
	scanf("%d",&M);
	for(m=0;m<=M/20;m++){
		for(p=0;p<=M/4;p++){
			q=(M-20*m-4*p)/10;
			if(m*20+p*4+q*10==M&&q>=0){
			printf("%d:%d,%d,%d\n",cnt++,m*4,p*2,q);
			fail=0;
		}
		}
	}
	if(fail)printf("No!\n");
return 0;	
}
