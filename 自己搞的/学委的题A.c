#include <stdio.h>
#include <math.h>
char change(char c)
{
	if(c>='a'&&c<='z')c='A'+c-'a';
	else if(c>='A'&&c<='Z')c='a'+c-'A';
	else {
		while(c>'Z'||c>'z')c-=26;
	}
	return c;
}
int main()
{
	int n=0,flag,min=0,j=0,m=0;
	char ch='0',ans='0';
	scanf("%d %c",&n,&ch);
	if(ch>='A'&&ch<='Z')flag=1;
	int k=0,i=0,t=0;
	for(k=1; k<=2*n-1; k++) {
		t=abs(k-n);
		m=k<n?2*n-k:k;
		for(i=1; i<=m; i++) {
			ans=ch;
			for(j=0; j<t; j++) {
				ans+=2;
				if(ans>'z'||(ans>'Z'&&flag))ans-=26;
			}
			min=k>n?2*n-k+1:k;
			int temp=0;
			temp=i>8?15-i:i-1;
			if(i>=min) {
				ans-=temp;
				if(ans>'z'||(ans>'Z'&&flag))ans-=26;
				else if(ans<'A'||(ans<'a'&&!flag))ans+26;
			} else ans=' ';
			if((k==1||k==2*n-1||i==min||i==t)&&k!=n&&(abs(ans-ch)<26))ans=change(ans);
			printf("%c",ans);
		}
		printf("\n");
	}
	return 0;
}
