#include <stdio.h>
#include <string.h>
int main()
{int by=2012,bm=4,bd=9;
int ey,em,ed,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},t;
char *p[10]={"3 and 8.","4 and 9.","5 and 0.","1 and 6.","2 and 7.","Free.","Free.",NULL};
//scanf("%d%d%d",&by,&bm,&bd);
scanf("%d %d %d",&ey,&em,&ed);
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
int W;
if (em==1||em==2) 
   {
   em=em+12;
   ey=ey-1;} 
W= (ed+2*em+3*(em+1)/5+ey+ey/4-ey/100+ey/400)%7;
W=W+1;
int i=t,cnt=0;
//printf("W=%d,t=%d\n",W,t);
while (i>=91&&W<=5){
		i-=91;
		cnt--;
		if(W+cnt<1){
			W=5;
			cnt=0;
		}
		
		//printf("%s\n",p[W+cnt-1]);
}
printf("%s\n",p[W+cnt-1]);
//printf("%s",p[1]);
return 0;
}
