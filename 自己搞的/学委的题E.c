#include <stdio.h>
int main(){
	int n=0;
	char ch='0';
	scanf("%d %c",&n,&ch);
	int i=0,k=0,ans=0;
	ans=ch;
	for(k=1;k<=n;k++){
		for(i=1;i<=2*k-1;i++){
			if(i==k)ans=ch+k-1;
			else if(i>k)ans=ch+((2*n+k+1-i)*(i-k))/2+2*k-i-1;
			else ans=' ';
			while(ans<'A'&&ans!=' ')ans+=26;
			while(ans>'Z'&&ans!=' ')ans-=26;
			printf("%c",ans);
		}
		printf("\n");
	}
	return 0;
}
