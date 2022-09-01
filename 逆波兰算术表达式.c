#include <stdio.h>
#include <string.h>
int main()
{
	char ch[100];
	int num[100]= {0},i=0,n=0,fu=0,k=0,temp=0;
	long long int result=0;
	gets(ch);
	for(k=0; ch[k]!='\0'; k++) {
		int flag=0,j=0;
		if(ch[k]>='0'&&ch[k]<='9') {
			temp=(int)ch[k]-'0';
			if(fu)temp=-temp;
			num[i]=temp+num[i]*10;
			n=1;
		} else  if(ch[k]=='+') {

			result=num[i-1]+num[i-2];
			flag=1;
			n=0;
		} else if(ch[k]=='-') {
			if(ch[k+1]==' '||ch[k+1]=='\0') {
				result=num[i-2]-num[i-1];
				flag=1;
				n=0;
			} else fu=1;
		} else if(ch[k]=='*') {

			result=num[i-2]*num[i-1];
			flag=1;
			n=0;
		} else if(ch[k]=='/') {

			result=num[i-2]/num[i-1];
			flag=1;
			n=0;
		} else {
			if(n)i++;
			fu=0;
			continue;
		}
		if(flag) {
			num[i-1]=result;
			for(j=i-2; j>=0; j--) {
				num[j]=num[j-1];
			}
		}
		//printf("result=%d\n",result);
	}
	printf("%d\n",result);
	return 0;
}
