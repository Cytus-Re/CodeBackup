#include <stdio.h>
int main()
{int n,o,f,t,flag=0,total=0;
int d1,d2,d3;
long long int m;
scanf("%d",&n);
m=100*n;
for(o=0;o<=m;o+=10){
	for(f=0;f<=m/5;f+=12){
		t=(m-o-5*f)/10;
		//for(t=0;t<=10*n;t++){
			d1=18*o;
			d2=15*f;
			d3=20*t;
			//total=o+5*f+10*t;
			if(d1==d2&&d2==d3){
				flag=1;
				printf("%d,%d,%d\n",o,f,t);
			}
		//}
	}
}
if(flag==0)printf("No change.\n");
return 0;
}
