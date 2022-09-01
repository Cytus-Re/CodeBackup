#include <stdio.h>
int main(){
	char ch,c;
	int n=0,k=0,i=0,temp=0;
	scanf("%d %c",&n,&ch);
	for(k=1;k<=2*n-1;k++){
		if(k<=n)temp=2*n-k;
		else temp=k;
		for(i=1;i<=temp;i++){
			if(k==1||k==2*n-1){
				c=ch++;
			}
			else if(i==k||i==abs(2*n-k)){
				c=ch++;}
			else c=' ';
			if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
				c++;
				ch++;
			}
			while(c>'Z'){
			ch-=26;
			c-=26;}
			if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
				c++;
				ch++;
			}
			printf("%c",c);
		}
		printf("\n");
	}
return 0;
}
