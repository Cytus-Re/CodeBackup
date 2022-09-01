#include <stdio.h>
typedef	struct pen_ {
	int num;
	int price;
} pen;
int main(){ 
int n=0;
scanf("%d",&n);
pen p[3];
scanf("%d %d",&p[0].num,&p[0].price);
scanf("%d %d",&p[1].num,&p[1].price);
scanf("%d %d",&p[2].num,&p[2].price);
int i,m,ans=9999999;
for(i=0; i<3; i++)
{
	int temp=0;
	if(n%p[i].num==0)temp=n/p[i].num;
	else temp=n/p[i].num+1;
	m=temp*p[i].price;
	if(m<ans)ans=m;
}
	printf("%d\n",ans);
}
