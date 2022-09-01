#include <stdio.h>
#include <string.h>
int match(char *p,char *q,int l2)
{
	int ret=1,i=0;
	if(*p==*q) {
		for(i=1; i<l2; i++) {
			if(*(p+i)!=*(q+i)) {
				ret=0;
				break;
			}
		}
	} else ret=0;
	return ret;
}
int main()
{
	char str1[200],str2[20],str3[20];
	char *p,*q,*r;
	int l2=0,i=0,l3=0;
	gets(str1);
	gets(str2);
	gets(str3);
	p=str1;
	q=str2;
	r=str3;
	l2=strlen(str2);
	l3=strlen(str3);
	while(*p!='\0') {
		if(match(p,q,l2)) {
			printf("%s",r);
			p+=l2;
		} else {
		printf("%c",*p);
		p++;}
	}
	printf("\n");
	return 0;
}
