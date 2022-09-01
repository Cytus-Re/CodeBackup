#include <stdio.h>
#include <string.h>
int convert(char c);
int main()
{
	char tab[10][3]= {"7D","50","37","57","5A","4F","6F","54","7F","5F"};
	while (1) {
		char str[6];
		int i=0,l=0,temp=0;
		char s[6],put[5][3];
		scanf("%s",s);
		l=strlen(s);
		if(strcmp(s,"0")==0)break;
		for(i=0; i<l; i++) {
			str[5-l+i]=s[i];
		}
		for(i=0; i<5-l; i++)
			str[i]='0';
			for(i=0; i<5; i++) {
				temp=convert(str[i]);
				strcpy(put[i],tab[temp]);
			}
			printf("%s %s %s %s %s\n",put[0],put[1],put[2],put[3],put[4]);
	
		
	}
	return 0;
}
int convert(char c)
{
	int num;
	num=(int)c-'0';
	return num;
}
