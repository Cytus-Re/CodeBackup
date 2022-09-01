#include <stdio.h>
int bomb(int i,int j);
char a[111][111];
int m,n;
int main()
{
	int i=0,j=0,cnt=0,k=0,l=0,num=0;
	while(1) {
		scanf("%d %d%*c",&m,&n);
		if(m==0&&n==0)break;
		else for(k=0; k<m; k++) {
				gets(a[k]);
			}
		cnt++;
		if(cnt!=1)printf("\n");
		printf("Field #%d:\n",cnt);
		for(i=0; i<m; i++) {
			for(j=0; j<n; j++) {
				if(a[i][j]=='.') {
					num=bomb(i,j);
					printf("%d",num);
					num=0;
				} else printf("*");
			}
			printf("\n");
		}
		for(i=0; i<m; i++) {
			for(j=0; j<n; j++) {
				a[i][j]='0';
			}
		}
		/*for(i=0; i<m; i++) {
			puts(a[i]);
		}*/
	}
	return 0;
}
int bomb(int i,int j)
{
	int ret=0;
	if(i!=m-1&&a[i+1][j]=='*')ret+=1;
	if(j!=n-1&&a[i][j+1]=='*')ret+=1;
	if(i!=0&&a[i-1][j]=='*')ret+=1;
	if(j!=0&&a[i][j-1]=='*')ret+=1;
	if(i!=0&&j!=0&&a[i-1][j-1]=='*')ret+=1;
	if(i!=0&&j!=n-1&&a[i-1][j+1]=='*')ret+=1;
	if(i!=m-1&&j!=n-1&&a[i+1][j+1]=='*')ret+=1;
	if(i!=m-1&&j!=0&&a[i+1][j-1]=='*')ret+=1;
	return ret;
}
