#include <stdio.h>
int main()
{
char ch,m;
int a,h,k,j,even=0,i,cnt=0;
scanf("%c %d %d",&ch,&a,&h);
m=ch;
if(a%2==0)even=1;
for(k=1;k<=h;k++){
	for(j=1;j<=h-k;j++){
		printf(" ");}
	for(i=1;i<=a+2*(k-1);i++){
		switch (even){
		case 1:
		if (i<=(a+2*(k-1))/2)
			{if(ch=='z'||ch=='Z')cnt++;printf("%c",ch);ch--;if((m<'a'&&ch<'A')||(m>='a'&&ch<'a'))ch+=26;}
		else 
			{ch++;if((m<'a'&&ch>'Z')||(m>='a'&&ch>'z'))ch-=26;printf("%c",ch);if(ch=='z'||ch=='Z')cnt++;}
		//if (i==(a+2*(k-1))/2)ch++;
		break;
		case 0:
		if (i<=(a+2*(k-1))/2+1)
			{if(ch=='z'||ch=='Z')cnt++;printf("%c",ch);ch--;if((m<'a'&&ch<'A')||(m>='a'&&ch<'a'))ch+=26;}
		else 
			{ch++;if((m<'a'&&ch>'Z')||(m>='a'&&ch>'z'))ch-=26;printf("%c",ch);if(ch=='z'||ch=='Z')cnt++;}
		if (i==(a+2*(k-1))/2+1) ch++;
		break;
		}
	}
ch=m;
if(k==h&&m<'a')printf("\n所建金字塔共使用%d个字母砖块Z",cnt);
if(k==h&&m>='a')printf("\n所建金字塔共使用%d个字母砖块z",cnt);
printf("\n");
}
return 0;
}
