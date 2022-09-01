#include<stdio.h>
#include<math.h>
int main()
{
	int l,i,j;
	char c;
	scanf("%d %c",&l,&c);
	int ll=l-1;
	for(i=-ll; i<=ll; i++) {
		int ii=abs(i);
		for(int k=0; k<ll-ii; k++)putchar(' ');
		for(j=-ii; j<=ii; j++) {
			//if(i==j||i+j==0)
			//{
			int cc=c+(abs(j)+ii);
			while((c<='z'&&c>='a'&&cc>'z')||(c<='Z'&&c>='A'&&cc>'Z'))cc-=26;
			if((i==j||i+j==0||i==-ll||i==ll)&&i!=0) {
				if(cc>='a')cc+='A'-'a';
				else cc+='a'-'A';
			}
			putchar(cc);
			//}
			//else putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}
