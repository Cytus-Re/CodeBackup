#include <stdio.h>
int main()
{int n,i,count,i1,i2;
long long int ai[20],bi[20],c=1,d=1,c1,d1,s,e,t,m,x,y;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%lld%lld",&ai[i],&bi[i]);//输入 
}
//逐个约分 
for(i1=0;i1<n;i1++){
	for(i2=0;i2<n;i2++){
		x=ai[i1];
		y=bi[i2];
		//printf("ai=%lld bi=%lld \n",ai[i1],bi[i2]);
		while (y!=0){
 		m=x%y;
 		x=y;
 		y=m;
		}
		if(x!=1){
		ai[i1]/=x;
		bi[i2]/=x;
		}
			
	}
}
//printf("a1=%d b2=%d a2=%d b2=%d\n",ai[0],bi[0],ai[1],bi[1]);
for(count=0;count<n;count++){//开始连乘 
	c=c*ai[count];
	d=d*bi[count];	
	//printf("c=%lld d=%lld\n",c,d);	
}
c1=c;d1=d;
//printf("c1=%d d1=%d\n",c1,d1);
while (d1!=0){//乘完后的分数约分 
 s=c1%d1;
 c1=d1;
 d1=s;
 //printf("c1=%d d1=%d s=%d\n",c1,d1,s);
}
e=c1;
if(e!=1){
c/=e;
d/=e; 
}
if(c<0&&c*d>0){//整理符号（负数问题) 
c=-c;
d=-d;
}
if(c*d<0&&d<0){
c=-c;
d=-d;
}
d==1?printf("%lld\n",c):printf("%lld/%lld\n",c,d);
return 0;
}
