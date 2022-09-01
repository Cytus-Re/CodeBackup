#include <stdio.h>
#include <string.h>
int main()
{
	char str1[1000],str2[1000];
	int l1=0,l2=0,fu1=0,fu2=0;
	int s;
	gets(str1);
	gets(str2);
	//puts(str1);
	//puts(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	
	//处理符号 
	if(str1[0]=='-'){
		fu1=1;l1--;
		for(s=0;str1[s]!='\0';s++){
			str1[s]=str1[s+1];
		}
		str1[l1]='\0';
	}
	if(str2[0]=='-'){
		fu2=1;l2--;
		for(s=0;str2[s]!='\0';s++){
			str2[s]=str2[s+1];
		}
		str2[l2]='\0';
	}
	
	int temp1=0,temp2=0;
	int i=0,j=0;
	int m=0,n=0,zero=0;
	int a[10000]={0},b[10000]={0},result[100000]={0};
	for(i=l1-1; i>=0; i--) {
		if(str1[i]=='.') {
			m=l1-i-1;
			l1--;
			continue;
		}
		a[temp1]=(int)str1[i]-'0';
		temp1++;
	}
    
//找并去除小数点 再倒序 
	for(i=l2-1; i>=0; i--) {
		if(str2[i]=='.') {
			n=l2-i-1;
			l2--;
			continue;
		}
		b[temp2]=(int)str2[i]-'0';
		temp2++;
	}
	
	if((l1==1&&a[0]==0)||(l2==1&&b[0]==0))zero=1;
		
//开始做乘法 
	int len=0,carry=0;
	for(j=0; j<l1; j++) {
		for(i=0; i<l2; i++) {
			result[i+j]+=(a[j]*b[i]);
			carry=(result[i+j])/10;
			result[i+j]%=10;
			result[i+j+1]+=carry;
			carry=0;
		}
	}
	len=l1+l2-2;
	if(result[len]>0) {
		len++;
	}
	
	int v=0,flag=1,p=0,r=0;
	//消后面的0 
	for(r=len-1;r>=0;r--){
		if(result[r]!=0)break;
		if(result[r]==0)len--;
	}
	//消前面的0 
	for(v=0;v<m+n;v++){
		if(result[v]!=0)break;
		if(result[v]==0){
			p++;	
		}
	}
	
	//printf("result[0]=%d\n",result[0]);
if(m+n>=len)flag=0;
if(zero)printf("0\n");	
	//值大于1 
else if(flag){
	int ent3=0,ent4=0;
	if((fu1==1&&fu2==0)||(fu2==1&&fu1==0))printf("-");
	for(i=len-1;i>=p; i--) {
		if(m+n==i+1&&ent4==0){
			printf(".");
			ent4=1;
			i++;
			continue;
		}
		//if(ent4==1)
		printf("%d",result[i]);
		//ent3=1;
	}
	//if(ent3==0)printf("0");
	printf("\n");
}
 	//值小于1 
else{
	if((fu1==1&&fu2==0)||(fu2==1&&fu1==0))printf("-");
	printf("0."); 
	for(i=m+n-1;i>=p;i--){
		printf("%d",result[i]);
	}
	printf("\n");
}
	return 0;
}
