#include <stdio.h>
int main(){
//	int a[13];
	int i=0,s=0,r=0,c=0,flag=0,ans=0;
	for(i=1;i<=12;i++){
		scanf("%d",&c);
		if(r+300<c){
			flag=1;
			ans=-i;
			break;
		}
		s+=((300+r-c)/100)*100;
		r+=300-((300+r-c)/100)*100-c;
		//printf("s=%d  m=%d  r=%d\n",s,i,r);
	}
	if(!flag)ans=s*1.2+r;
	printf("%d\n",ans);
	return 0;
}
