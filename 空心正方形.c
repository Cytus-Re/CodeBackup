#include<stdio.h>
int main(){
	int n;
	char a,ch; 
	int k,i;
	scanf("%d %c",&n,&ch);
	if(ch>'a'&&ch<'z')ch-=32;
	a=ch;
	if(ch>'A'&&ch<'Z'){
	for(k=1;k<=n;k++){
		for(i=1;i<=n;i++){
			if(k==1||k==n){
				printf("%c ",ch);
				ch++;
			}
			else if(i==1||i==n){
				ch+=i-1;
				if(i!=n)printf("%c ",ch);
				else printf("%c",ch);
			}
			else printf("  ");
		}
		printf("\n");
		ch=a+k;
	}
}
else printf("Input error!\n");
	return 0;
} 
