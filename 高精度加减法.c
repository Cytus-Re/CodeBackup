#include <stdio.h>
#include <string.h>
int main()
{
	char str[1100],str1[550],str2[550];
	int n=0,m=0;

	scanf("%d%*c",&n);
	for(m=1; m<=n; m++) {
		int a[550]= {0},b[550]= {0},result[1000]= {0};
		int i=0,j=0,k=0,l=0,l1=0,l2=0,temp1=0,temp2=0,m=0;
		int add=0,min=0;
		gets(str);

		//处理输入
		for(j=0; str[j]>='0'; j++) {
			str1[j]=str[j];
		//	printf("%d ",&str1[j]);
		}
		for(k=j+1; str[k]!='\0'; k++) {
			//str2[l++]=str[k];
			str2[l]=str[k];
			l++;
		}
		str1[j]='\0';
		str2[l]='\0';
		l1=strlen(str1);
		l2=strlen(str2);
		//判断符号
		if(str[j]=='+')add=1;
		if(str[j]=='-')min=1;
		//转换成数字且倒序
		for(i=l1-1; i>=0; i--) {
			a[temp1]=(int)str1[i]-48;
			temp1++;
		}
		for(i=l2-1; i>=0; i--) {
			b[temp2]=(int)str2[i]-48;
			temp2++;
		}
		/*for(i=0;i<l2;i++){
			printf("%d",b[i]);
		}
		printf("\n");
		for(i=0;i<l1;i++){
			printf("%d",a[i]);
		}*/
		int len=0,carry=0;
		if(l2<=l1)len=l1;
		else len=l2;
		//加法
		if(add) {
			for(i=0; i<len; i++) {
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

		}
		//减法
		if(min) {
			int exchange=0;
			if(l1<l2)exchange=1;
			if(l1==l2) {
				for(i=len-1; i>=0; i--) {
					if(a[i]>b[i]) {
						break;
					} else if(a[i]<b[i]) {
						exchange=1;
						break;
					} else continue;
				}
			}
			if(exchange) {
				for(i=0; i<len; i++) {
					if(b[i]-a[i]<0) {
						b[i+1]-=1;
						b[i]+=10;
					}
					result[i]=b[i]-a[i];
				}


			} else {
				for(i=0; i<len; i++) {
					if(a[i]-b[i]<0) {
						a[i+1]-=1;
						a[i]+=10;
					}
					result[i]=a[i]-b[i];
				}

			}
			if(exchange)printf("-");
		}
		//printf("l=%d\n",len);

		//输出结果
		int ent=0;
		for(i=len-1; i>=0; i--) {
			if(result[i]==0&&ent==0) {
				continue;
			}
			printf("%d",result[i]);
			ent=1;
		}
	if(ent==0)printf("0");
		printf("\n");
	}
	return 0;
}




