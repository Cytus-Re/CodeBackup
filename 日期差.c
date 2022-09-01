#include <stdio.h>
int main()
{int by,bm,bd;
int ey,em,ed,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},t;
scanf("%d%d%d",&by,&bm,&bd);
scanf("%d%d%d",&ey,&em,&ed);
for(t=0;(by!=ey||bm!=em||bd!=ed);t++){
	by%4==0&&by%100!=0||by%400==0?(m[2]=29):(m[2]=28);
    bd++;
     if(bd>m[bm]){
     	bd=bd-m[bm];
     	bm++;
	 }
	 if(bm>12){
	 	bm-=12;
	 	by++;
	 }
}
t==1?printf("%d day\n",t):printf("%d days\n",t);
return 0;
}
