#include <stdio.h>
#include <string.h>
#include <math.h>
int convert (char *str)
{
	int i=0,h=0;
	for(i=0; i<2; i++) {
		h=h*10+(int)str[i]-'0';
	}
	h+=8;
	if(h>=24)h-=24;
	return h;
}
int ten(char *str,int l)
{
	int i=0,n=0,k=0;
	for(i=0; str[i]!='\0'; i++) {
		k=pow(16,l-1);
		if(str[i]>='A'&&str[i]<='F') {
			n+=((int)str[i]-55)*k;
		} else n+=((int)str[i]-'0')*k;
		l--;
	}
	return n;
}
int main()
{
	int exit=0,result=0,n=0,h=0;
	char UTC[8]= {0}; 
	while(1) {
		char ch,sixteen[20];
		int cnt1=0,cnt2=0,ready=0,i=0,k=0,wrong=0;
		while((ch=getchar())!='\n'&&wrong!=1) {
			cnt1++;
			//printf("cnt=%d\n",cnt1);
			if(ready) {
				sixteen[k]=ch;
				//printf("%c\n",sixteen[k]);
				k++;
			}
			if(ch=='E'&&cnt1==1) {
				exit=1;
				break;
			}
			if(cnt2==1&&cnt1<=13) {
				UTC[i]=ch;
				//printf("%c\n",UTC[i]);
				i++;
			} else if(ch==',')cnt2++;
			else if(ch!='R'&&cnt1==4&&cnt2==0){
			wrong=1;}
			else if(ch=='V'&&cnt2==2){
			wrong=1;}
			if(ch!='$'&&ch!='*'&&ready==0) {
				result^=ch;
				//printf("r=%d  ch=%c\n",result,ch);
			}
			else if(ch=='*'){
			ready=1;
			//printf("enter\n");
			}
			
		}
		if(wrong)continue;
		int l=0;
		result%=65536;
		sixteen[k]='\0';
		l=strlen(sixteen);
		//puts(sixteen);
		n=ten(sixteen,l);
		if(result==n) {
			UTC[i]='\0';
			h=convert(UTC);
		}
		//puts(UTC);
		if(exit) {
			printf("%02d:%c%c:%c%c\n",h,UTC[2],UTC[3],UTC[4],UTC[5]);
			break;
		}
	}
	return 0;
}
