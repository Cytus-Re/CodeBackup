#include <stdio.h>
#include <math.h>
int main()
{char temp1[9],temp2[9];
int i0,i,i1,i2,j,m,p=0,q=0,a,b,exit=0,x[9],y[9],v1=0,v2=0,t1=0,t2=0;
//初始化数组 
for(i0=0;i0<=9;i0++){
	x[i0]=-999;temp1[i0]=127;
	y[i0]=-999;temp2[i0]=127;
}
scanf("%s %s",&temp1,&temp2);
//将字符转换成数值；v1 v2为数组有效长度 
for(i=0;i<=9;i++){
	if(temp1[i]>='0'&&temp1[i]<='9'){
		x[i]=(int)temp1[i]-48;
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
printf("%d %d\n",x[0],y[0]);
//开始枚举；j为x的数制，m为y的； 
for (j=2;j<=36;j++){
	if(x[v1-1]<j){
		for(i1=0;i1<=v1;i1++){
			p=p+x[v1-1-i1]*(pow(j,i1));
			t1=p;
			p=0;
			}
		}
	for(m=2;m<=36;m++){
			if(y[v2-1]<m){
			for(i2=0;i2<=v2;i2++){	
				q=q+y[v2-1-i2]*(pow(m,i2));
				t2=q;
				q=0;
			}
			}
				//else continue;
				if(t1==t2&&t1!=0&&t2!=0){
					a=j;
					b=m;
					exit=1;
				    break;	
				}
	if(exit)break;}
	if(exit)break;}
if(j==37&&m==37){printf("%s is not equal to %s in any base 2..36\n",temp1,temp2);}
else
printf("%s (base %d) = %s (base %d)\n",temp1,a,temp2,b);
return 0;
}
