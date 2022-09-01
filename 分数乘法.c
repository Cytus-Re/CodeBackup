#include <stdio.h>
int main()
{int n,cnt,i,count,i1,i2;
long long int ai[20],bi[20],c=1,d=1,a[20],b[20],c1,d1,s,e,t,m,x,y,v;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%lld%lld",&ai[i],&bi[i]);//输入 
}


for(cnt=0;cnt<n;cnt++)//保存数据用于约分
{
	a[cnt]=ai[cnt];
	b[cnt]=bi[cnt]; 
while (b[cnt]!=0)//约分
{
 t=a[cnt]%b[cnt]; 
 a[cnt]=b[cnt];
 b[cnt]=t;
//printf("ai=%d bi=%d a=%d\n",ai[cnt],bi[cnt],a[cnt]);
}
m=a[cnt];
if (m!=1)
{
ai[cnt]/=m;
bi[cnt]/=m;
}
}	
//printf("ai=%d bi=%d %d\n",ai[cnt],bi[cnt],cnt);
for(count=0;count<n;count++)//开始连乘 
{
	c=c*ai[count];
	d=d*bi[count];	
	//printf("c=%d d=%d\n",c,d);	
}
c1=c;d1=d;
//printf("c1=%d d1=%d\n",c1,d1);
while (d1!=0)//乘完后的分数约分 
{
 s=c1%d1;
 c1=d1;
 d1=s;
 //printf("c1=%d d1=%d s=%d\n",c1,d1,s);
}
e=c1;
if(e!=1)
{
c/=e;
d/=e; 
}
if(c<0&&c*d>0)//整理符号（负数问题) 
{
c=-c;
d=-d;
}
if(c*d<0&&d<0)
{
c=-c;
d=-d;
}
d==1?printf("%lld\n",c):printf("%lld/%lld\n",c,d);


//for (cnt=0;cnt<i;cnt++)
//{
//printf("%d %d\n",ai[cnt],bi[cnt]);
//}

return 0;
}
