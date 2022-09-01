#include <stdio.h>
#include <math.h>
int main()
{
int a,b,x,y,n,A=1,B=1,fake,cnt1=0,cnt2=0;
double m,c,d,t;
scanf("%d%d%d",&x,&y,&n);
if(x==0)
{
	A=0;
}
else 
{
	x>y?(fake=1):(fake=0);
	for (b=1;b<=n;b++)
	{
	cnt2=0;
	if(m>t)
	cnt1++;
	  for(fake==0?(a=1):(a=b);(fake==0?(a<=b):a>=0);a++)
	  {
		c=(double)x/y;
		d=((double)a/b); 
		m=fabs(c-d);
		if(b==1&&(a==1||a==0))
		t=m;
		if(t-0.0<1e-15)
		{break;
		}
	    //printf("m=%lf\nt=%lf\n a=%d b=%d\nA=%d B=%d\n",m,t,a,b,A,B);
        if(fabs(t-m)<0.0000001)
			{
			//printf("enter1\n");
	    	//if(B>b)
	     	//{
	     	//printf("enter2\n");
			B=B;
	     	A=A;
			//}	 
			}
	    else if(m<t&&fabs(t-m)>0.0000001)
	    {  //printf("enter3\n");
			t=m;
			A=a;
			B=b;
		}
	    else if(m>t&&fabs(t-m)>0.0000001&&d>=c)
		{
		  cnt2++;
		}
		if(cnt2>5||t-0.0<1e-15)
		{
		break;
	    }
		//printf("\n");
	  }
	  	if(t-0.0<1e-6)
	  {break;
	  }
    }
}
A==0?printf("0\n"):printf("%d/%d\n",A,B);
//printf("%d/%d\n",A,B);
return 0;
} 
