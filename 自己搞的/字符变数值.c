#include <stdio.h>
int main()
{int i=0,i1,i2,p=0,q=0,r1=0,s1=0,r2=0,s2=0;
char x[9]={0,0,0,0,0,0,0,0,0},y[9]={0,0,0,0,0,0,0,0,0};
scanf("%s %s",&x,&y);
//printf("%s %s",x,y);
for (i=0;i<=8;i++){
	if(x[i]>='0'&&x[i]<='9'){
		p=(int)x[i]-48;
		s1=r1+p;
		r1=10*s1;}
	if(y[i]>='0'&&y[i]<='9'){
		q=(int)y[i]-48;
		s2=r2+q;
		r2=10*s2;
	}
		
}
printf("%d %d",s1,s2);
} 
