#include <stdio.h>
int main(){
int num[9],t=0,i,cnt=0;
for(i=0;i<=9;i++){
	scanf("%d",&num[i]);
	t=num[0];
}
for(i=0;i<=9;i++){

	if(num[i]>=t){
		t=num[i];
	}
}
for(i=0;i<=9;i++){
	if(num[i]==t)
	printf("%d\n",i+1);
}
return 0;
}
