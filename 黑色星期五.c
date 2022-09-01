#include <stdio.h>
int main()
{int Y=0,y=0,m=0,W=0,cnt=0,M=0;
	scanf("%d",&Y);
	y=Y;
for(m=1;m<=12;m++){
	M=m;
	if (m==1||m==2) 
   {M=M+12;
   y=Y-1;}
	W= (13+2*M+3*(M+1)/5+y+y/4-y/100+y/400)%7;
	if(W+1==5)cnt++;
	y=Y;
}
cnt==1?printf("There is 1 Black Friday in year %d.\nIt is:\n",Y):printf("There are %d Black Fridays in year %d.\nThey are:\n",cnt,Y);
for(m=1;m<=12;m++){
	M=m;
	if (m==1||m==2) 
   {M=M+12;
   y=Y-1;}
	W= (13+2*M+3*(M+1)/5+y+y/4-y/100+y/400)%7;
	y=Y;
	if(W+1==5)printf("%d/%d/13\n",Y,m);
}
return 0;
}
 
