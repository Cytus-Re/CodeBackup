#include <stdio.h>
int main()
{
int by,bm,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},em,bd,t,ey,ed=0;
int leapyear=0;
scanf("%d%d%d",&by,&bm,&bd);
scanf("%d",&t);
ey=by;em=bm;
for(em=bm;t>=m[em];em++){
if(em>12){
		em-=12;
		ey++;
	}
	ey%4==0&&ey%100!=0||ey%400==0?(m[2]=29):(m[2]=28);
	t-=m[em];
}
ed=bd+t;
while(ed>m[em]){
	ed-=m[em];
	em++;
}
printf("%d.%d.%d\n",ey,em,ed);
return 0;
}
