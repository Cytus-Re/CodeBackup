#include <stdio.h>
int main()
{
int a,b,m=0,n=0,t=1,cnt=1,c=0;
scanf("%d/%d",&a,&b);
m=a;n=b;
printf("0.");
for(m=a;t!=0&&cnt<=200;cnt++){
	m*=10;
	t=m%n;
	c=m/n;
	printf("%d",c);
	m=t;
}
printf("\n");
return 0;
}
