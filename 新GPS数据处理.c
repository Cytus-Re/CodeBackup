#include <stdio.h>
#include <string.h>
int ten(char c){
	if(c>='0'&&c<='9')return c-'0';
	else if(c>='A'&&c<='F')return c-'A'+10;
}
int main(){
	char str[100];
	int temp=0,t=0;
	do{
	int cnt1=0,cnt2=0,result=0,exit=0,l=0,m=0,i=0;
	temp=0;
	//$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50
	scanf("%s",str);
	l=strlen(str);
	if(str[3]!='R')continue;
	if(str[18]!='A'){
		continue;
} 	
	for(i=1;str[i]!='*';i++){
		result^=str[i];
	} 
	m=ten(str[l-2])*16+ten(str[l-1]);
	if(m==result){
		temp=(str[7]-'0')*10+(str[8]-'0')+8;
		if(temp>=24)temp-=24;
		t=temp;
		if(t>=10)
printf("%d:%c%c:%c%c\n",t,str[9],str[10],str[11],str[12]);
else printf("0%d:%c%c:%c%c\n",t,str[9],str[10],str[11],str[12]);
	}
}while(strcmp(str,"END")!=0);
return 0;
} 
