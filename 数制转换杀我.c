#include <stdio.h>
#include <math.h>
int main()
{char temp1[99],temp2[99];
long long int i0,i,i1,i2,j,m,p=0,q=0,a,b,exit=0,x[99],y[99],v1=0,v2=0,t1=0,t2=0,e,f,M=0,N=0;
//初始化数组 
for(i0=0;i0<=99;i0++){
	x[i0]=-999;temp1[i0]=127;
	y[i0]=-999;temp2[i0]=127;
}
scanf("%s %s",temp1,temp2);
//将字符转换成数值；v1 v2为数组有效长度 
for(i=0;i<=99;i++){
	if(temp1[i]>='0'&&temp1[i]<='9'){
		x[i]=(long long int)temp1[i]-48;
		v1++;
	}
	if(temp1[i]>='A'&&temp1[i]<='Z'){
		x[i]=(int)temp1[i]-55;
		v1++;
	}
	if(temp2[i]>='0'&&temp2[i]<='9'){
		y[i]=(int)temp2[i]-48;
		v2++;
	}
	if(temp2[i]>='A'&&temp2[i]<='Z'){
		y[i]=(int)temp2[i]-55;
		v2++;
	}
}
//printf("%d %d\n",x[0],y[0]);
//确定最小数制 
for(e=0;e<=v1-1;e++){
	if(x[e]>=M)M=x[e];
}
for(f=0;f<=v2-1;f++){
	if(y[f]>=N)N=y[f];
}

//开始枚举；j为x的数制，m为y的；
for (j=M+1;j<=36;j++){
		for(i1=0;i1<=v1-1;i1++){
			p=p+x[i1]*(pow(j,v1-1-i1));
			}
	for(m=N+1;m<=36;m++){
			for(i2=0;i2<=v2-1;i2++){	
				q=q+y[i2]*(pow(m,v2-1-i2));
			}
				//else continue;
				if(p==q&&p!=0&&q!=0){
					a=j;
					b=m;
					exit=1;
				    break;	
				}
				else
				q=0;
	}
	if(exit)break;else p=0;}
if(p==0&&q==0){printf("%s is not equal to %s in any base 2..36\n",temp1,temp2);}
else
printf("%s (base %lld) = %s (base %lld)\n",temp1,a,temp2,b);
return 0;
}
