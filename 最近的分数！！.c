#include <stdio.h>
#include <math.h>
int main()
{
int a1,a2;
double z,m1,m2,m,t1,t2,t=100000,f,a,b,x,y,n,A,B,c,d;
scanf("%lf%lf%lf",&x,&y,&n);
f=(double)x/y;
if(n>=y)
printf("%.0lf/%.0lf\n",x,y);   
else{
for (b=1;b<=n;b++)
	{   
	    z=b*x/y;
		a1=b*x/y;
		a2=b*x/y+1;
		t1=a1/b;
		t2=a2/b;
		m1=fabs(z-a1);
		m2=fabs(z-a2);
		//a=(m1<m2?a1:a2);
		m=(m1<m2?fabs(f-t1):fabs(f-t2));
		//printf("t=%lf m=%lf\na=%.0lf b=%.0lf",t,m,a,b);
		//if(fabs(m-t)<0.00000001)
		//{A=A;
		// B=B;
		//}
		 if(m<t)
	    	{  //printf("enter3\n");
			t=m;
			A=(m1<m2?a1:a2);
			B=b;
			}
	}
printf("%.0lf/%.0lf\n",A,B);
} 
return 0;	
}
