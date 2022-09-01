
#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000],a[1000]= {'\0'};
	int n=0,m=0,t=0,i=0;
	char ch;
	scanf("%s",str);
	do {
		scanf("%c",&ch);
	} while(ch==' ');//由于题目说输入空格数不定所以弄个循环 
	scanf("%d",&n);
	int temp=0,l=0,s=0,fu=0;
	l=strlen(str);
	//处理符号 
	if(str[0]=='-') {
		fu=1;
		l--;
		for(s=0; str[s]!='\0'; s++) {
			str[s]=str[s+1];
		}
		str[l]='\0';
	}
	//找小数点并去掉，且t是小数点前的位数，m是小数点后的位数 
	int ent2=0;
	for(i=0; i<l; i++) {
		if(str[i]=='.') {
			m=l-i-1;
			t=i;
			ent2=1;
			continue;
		}
		a[temp]=str[i];
		temp++;
	}
	l=strlen(a);
	
	if(ent2==0)t=l;//如果输入的是整数的处理，即小数点前位数就是串长 
	if(fu)printf("-");
	int ent=0;
	//n是往后或往前移的位数 
	if(n>0) {//后移 
		if(n<=m)//小数点前不用补0 
		{ 
			l++; 
			for(i=l-1; i>=t+n; i--) {
				a[i+1]=a[i];
			}
			a[t+n]='.';//加小数点
			 
			if(m-n<=8) {//如果位数不够8位 
				for(i=0; i<l; i++) {
					if(a[i]=='0'&&ent==0)//为了处理输入的是0.XX的，不输出首位的0 
					 {
						ent=1;
						continue;
					}
					printf("%c",a[i]);
					ent=1;
				}//补零 
				for(i=8-m+n; i>0; i--) {
					printf("0");
				}
			}
			 else {//够8位的情况 
				for(i=0; i<8+l-m+n; i++) {
					if(a[i]=='0'&&ent==0) {
						ent=1;
						continue;
					}
					printf("%c",a[i]);
					ent=1;
				}
			}
		} 
		else {//小数点前要补零 
			for(i=0; i<l; i++) {//先全部输出 
				if(a[i]=='0'&&ent==0) {
					ent=1;
					continue;
				}
				printf("%c",a[i]);
				ent=1;
			}//补零 
			for(i=1; i<=n-m; i++) {
				printf("0");
			}//点后8位 
			printf(".00000000");
		}
		printf("\n");
		
	} else if(n==0) {//不移 
		if(ent2==0)printf("%s.00000000\n",a);
		else {
			if(m<=8) {
                printf("%s",str);
				for(i=0; i<8-m; i++) {
					printf("0");
				}
			} else
				for(i=0; i<8+t+1; i++) {
					printf("%c",str[i]);
				}
			printf("\n");
		}

	}

//前移 
	else {
		n=-n;
		if(t>n) {
			l++;
			for(i=l-1; i>=t-n; i--) {
				a[i+1]=a[i];
			}
			a[t-n]='.';
			if(m+n<=8) {
				printf("%s",a);
				for(i=8-m-n; i>0; i--) {
					printf("0");
				}
			} else {
				for(i=0; i<8+l-m-n; i++) {
					printf("%c",a[i]);
				}
			} 
		} //基本同上 
		else {
			printf("0.");
			if(n-t<=8){
			for(i=1; i<=n-t; i++) {
				printf("0");
			}
			if(m+n<=8) {
				printf("%s",a);
				for(i=8-m-n; i>0; i--) { 
					printf("0");
				} 
			}else {
				for(i=0; i<8-n+t; i++) {
					printf("%c",a[i]);
				}
			}
		}
		else printf("00000000");
		}
		printf("\n");
	}
	return 0;
}
