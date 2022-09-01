#include <stdio.h>
int range(char ch)
{
	int r=0;
	if(ch>='0'&&ch<='9')r=1;
	else if(ch>='a'&&ch<='z')r=2;
	else if(ch>='A'&&ch<='Z')r=3;
	return r;
}
int main()
{
	char ch=0,str[1000]={0},c=0;
	int i=0,flag=0,t=0,v=0;
	while((ch=getchar())!='\n') {
		if(ch=='-') {
			flag=1;
			continue;
		}
		if(flag) {
			v=range(ch);
			if(v==t&&v!=0&&c<ch) {
				for(c=c+1; c!=ch+1; c++) {
					str[i++]=c;
				}
				flag=0;
				continue;
			} else {
				str[i++]='-';
			}

		}
		flag=0;
		str[i++]=ch;
		c=ch;
		t=range(ch);
	}
	printf("%s\n",str);
	return 0;
}
