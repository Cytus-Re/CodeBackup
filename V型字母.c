#include <stdio.h>
#include <math.h>
char convert(char c){
	//int flag=0;
	//if(c==128)flag=1;
	while(c>'Z'){
	//	if(flag)printf("     %c    ",c);
	c-=26;}
	while(c<'A')c+=26;
	return c;
}
int main(){
	int i=0,k=0,n=0;
	char ch,c,t;
	scanf("%d %c",&n,&ch);
	c=ch;
	for(k=1;k<=n;k++){
		for(i=1;i<=2*n-1;i++){
		//	if(i==k||i==1||i==2*n-1||i==2*n-k||k==n){
		//		printf("%c",ch++);
		//		if(ch>'Z')ch-=26;
		//	}
		if(i==k||i==2*n-k){
			c=ch+k-1;if(c>'Z'||c<'A')c=convert(c);
		}
		else if(i==1||i==2*n-1){
			c=ch+3*n-2-k; 
			if (c<0)c-=26;
			if(c>'Z'||c<'A')c=convert(c);
		//	if(c=='P')printf("%d,%d,%c,%c\n",ch+3*n-2-k,3*n-2-k,t-26,t-52);
		}
		else if(k==n){
			c=ch+n-1+abs(i-n);c=convert(c);
		}
			else c=' ';
		if(i==2*n-1)	printf("%c",c);
		else printf("%c ",c);
		}
		printf("\n");
	}
	return 0;
} 
