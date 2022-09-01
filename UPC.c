#include <stdio.h>
#include <string.h>
int main(){
char str[30]={'0'},str1[30]={'0'},str2[30]={'0'};
int i=0,j=0;
int sum1=0,sum2=0,total=0,final=0;
gets(str);
gets(str1);
gets(str2);
strcat(str,str1);
strcat(str,str2);
//puts(str);
for(i=0;str[i]!='\0';i+=2){
	sum1+=(int)str[i]-48;
}
for(j=1;str[j]!='\0';j+=2){
	sum2+=(int)str[j]-48;
}
sum1*=3;
total=sum1+sum2;
total-=1;
total%=10;
final=9-total;
printf("%d\n",final);
return 0;
} 
