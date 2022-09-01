#include <stdio.h>
#include <math.h>
int main()
{
	int n,ans=0;
	char ch;
	scanf("%d %c",&n,&ch);
	int k=0,i=0,t;
	int l=n-1,m=0;
	for(k=-l; k<=l; k++) {
		m=abs(k);
		for(t=0; t<l-abs(k); t++)putchar(' ');
		for(i=-m; i<=m; i++) {
			//	printf("k=%d i=%d\n\n\n\n",k,i);
			ans=ch+(abs(k)+abs(i));
			while((ch<='z'&&ch>='a'&&ans>'z')||(ch>='A'&&ch<='Z'&&ans>'Z'))ans-=26;
			if((k==-l||k==l||k+i==0||i==k)&&k!=0) {
				if(ans>='a'&&ans<='z')ans+='A'-'a';
				else ans+='a'-'A';
			}
			putchar(ans);

		}
		putchar('\n');
	}
	return 0;
}
