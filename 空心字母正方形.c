#include <stdio.h>
int main(){
	int n;
	char ch;
	scanf("%d %c",&n,&ch);
	if(ch>='a'&&ch<='z'){
		ch+='A'-'a';
	}
	if(ch>='A'&&ch<='Z'){
		int k=0,i=0,ans=0;
		for(k=1;k<=n;k++){
			for(i=1;i<=n;i++){
				if(k==1||k==n||i==1||i==n)ans=ch+k+i-2;
				else ans=' ';
				while (ans>'Z')ans-=26;
			i==n?printf("%c",ans):printf("%c ",ans);
			}
			putchar('\n');
		}
	}
	else printf("Input error!\n");
	return 0;
}
/* 
5 m
M N O P Q
N       R
O       S
P       T
Q R S T U*/ 
