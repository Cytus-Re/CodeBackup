#include <stdio.h>
#include <string.h>
int main()
{
	int n=0;
	scanf("%d%*c",&n);
	int i=0,l=0;
	for(i=0; i<n; i++) {
		char str[25];
		char *p;
		gets(str);
		l=strlen(str);
		p=str;
		int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
		while(*p!='\0') {
			if(*p>='0'&&*p<='9')cnt1=1;
			else if(*p>='A'&&*p<='Z')cnt2=1;
			else if(*p>='a'&&*p<='z')cnt3=1;
			else cnt4=1;
			p++;
		}
		if(l<6) {
			printf("Not Safe\n");
			continue;
		}
		if(cnt1&&cnt2&&cnt3&&cnt4)printf("Safe\n");
		else if((cnt1==0&&cnt2&&cnt3&&cnt4)||(cnt2==0&&cnt1&&cnt3&&cnt4)||(cnt3==0&&cnt2&&cnt1&&cnt4)||(cnt4==0&&cnt2&&cnt3&&cnt1))printf("Safe\n");
		else if((cnt1==0&&cnt2==0&&cnt3&&cnt4)||(cnt1==0&&cnt3==0&&cnt2&&cnt4)||(cnt1==0&&cnt4==0&&cnt3&&cnt2)||(cnt2==0&&cnt3==0&&cnt1&&cnt4)||(cnt2==0&&cnt4==0&&cnt3&&cnt1)||(cnt3==0&&cnt4==0&&cnt1&&cnt2))printf("Medium Safe\n");
		else printf("Not Safe\n");
	}
	return 0;
	}
