#include <stdio.h>  
int main(){
int n,m,point=1000,sum=0,i,d,w,fail=0,j,k=0,exit=0,win=0,temp=-999;
scanf("%d %d",&n,&m);
int dragon[n],warrior[m],t[m];
for (i=0;i<n;i++){
	scanf("%d",&dragon[i]);
}
for (i=0;i<m;i++){
	scanf("%d",&warrior[i]);
}
for(i=0;i<m;i++){
	t[i]=-999;
}
for(d=0;d<n;d++){
	win=0;
	if(n>m){
	fail=1;
	break;
	}
	for(w=0;w<m;w++){
		exit=0;
		if(warrior[w]>=dragon[d]){
			for(j=0;j<m;j++){
				if(warrior[w]==t[j]&&w==j){
				exit=1;break;}
			}
		if(exit)continue;
		if(warrior[w]<point){
		point=warrior[w];
		win=1;
		temp=w;
		}
		}
	}
	if(win){
			sum+=point;
			t[temp]=warrior[temp];
	}
	point=1000;
}
if(fail==1||win==0)printf("bit is doomed!\n");
else printf("%d\n",sum);
return 0;
}
