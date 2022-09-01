#include <stdio.h>
#include<string.h>

int main()
{
	int a,b,c;
	int i,j,k;
	char str1[550],str2[550],ret[550];
	unsigned long long int total=0;
	scanf("%d %d",&a,&b);
	c=b-a;
	str1[0]='1';
        str1[1]='\0';
        str2[0]='1';
        str2[1]='\0';
	for(i=1; i<c; i++) {
		int l1=0,l2=0,i=0,temp1=0,temp2=0,len=0,carry=0,temp3=0;
		int a[550]= {0},b[550]= {0}, result[1000]= {0};
		l1=strlen(str1);
		l2=strlen(str2);
		for(i=l1-1; i>=0; i--) {
			a[temp1]=(int)str1[i]-48;
			temp1++;
		}
		for(i=l2-1; i>=0; i--) {
			b[temp2]=(int)str2[i]-48;
			temp2++;
		}
		for(i=0; i<=len; i++) {
			result[i]+=(a[i]+b[i]);
			carry=(result[i])/10;
			result[i]%=10;
			result[i+1]+=carry;
			carry=0;
			//printf("r=%d,c=%d,r+1=%d,i=%d\n",result[i],carry,result[i+1],i);
		}
		if(result[len]>0) {
			len++;
		}
		for(i=len-1; i>=0; i--) {
			ret[temp3]=(char)result[i]+48;
			temp3++;
		}
		ret[len]='\0';
		//str3=Add(str1,str2);
		for(j=0; str2[j]!='\0'; j++) {
			str1[j]=str2[j];
		}
		for(j=0; ret[j]!='\0'; j++) {
			str2[j]=ret[j];
		}
	}
	for(k=0; ret[k]!='\0'; k++) {
		printf("%c",ret[k]);
	}
	printf("\n");
	return 0;
}
