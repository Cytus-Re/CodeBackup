#include <stdio.h>
int main(){
char str[10];
int fail=0,i=0,cnt=0;
	gets(str);
	if(str[4]>='0'&&str[4]<='9'){
		for(i=0;i<4;i++){
			if(str[i]=='O'||str[i]=='I'){
				fail=1;
				break;
			}
			if(str[i]>='A'&&str[i]<='Z')cnt++;
		}
		if(cnt<2)fail=1;
		fail==1?printf("no.\n"):printf("ok.\n");
	}
else printf("no.\n");
return 0;
}
