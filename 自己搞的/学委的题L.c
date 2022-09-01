#include <stdio.h>
int main(){
	char str[260];
	gets(str);
	int i=0,cnt1=0,cnt2=0,wrong=0;
	for(i=0;str[i]!='@';i++){
		if(str[i]=='(')
		cnt1++;
		else if(str[i]==')'){
		if(cnt2==cnt1)wrong=1;
		cnt2++;
		}
	}
	if(cnt1==cnt2&&!wrong)printf("YES\n");
	else printf("NO\n");
	return 0;
} 
