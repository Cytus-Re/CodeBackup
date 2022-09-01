#include <stdio.h>
int main()
{
int k,i,n,c1,c2,c3,j;
char ch;
scanf("%d %c",&n,&ch);
if(ch>='A'&&ch<='Z')
{
for(k=1;k<=2*n-1;k++){
	if(k<=n){
		for(i=1;i<=2*n-k;i++){
			if(i==k||i==2*n-k)
				{c1=ch+n-k;
			if (c1>'Z')c1-=26;
				printf("%c",c1);}
			else
				{printf(" ");}
	}
}
			else if(k>n){
		for(j=1;j<=k;j++){
			if(j==k||j==2*n-k)
			{c2=ch+n-k;
			while(c2<'A'){
			c2+=26;}
			  printf("%c",c2);}
			else
			{printf(" ");}	
			}
		}	
	printf("\n");
}
}
else
{printf("input error.\n");}
return 0;
}
	

