#include <stdio.h>
int main()
{long long int a,b,c,cnt=0,i,m,t;
scanf("%lld%lld",&a,&b);
if(b<0){
	c=a;
	a=abs(b);
	b=abs(c);
}
for(i=a;i<=b;i++){
	if(i%7==0){
		cnt++;
		continue;
}      
      m=i;
    while(abs(m)>9){
    	t=m%10;
    	if(abs(t)==7){cnt++;break;}
		else{
			m=m/10;
		}
		if(abs(m)==7)cnt++;
	}	
}
printf("%lld\n",cnt);
return 0;
}
