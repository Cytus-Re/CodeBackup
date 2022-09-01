# include <stdio.h>
# include <stdlib.h> 
int main(){
int n=0,i=0,k=0,l=0,length=0,t=0,r=0,j=0,s=0,sum=0,v=0,u=0,y=0,m=0,d=0,U=0;
char str[25],Y[25],M[25],D[25],sub1[25],sub2[25];
int a=0,flag=1;
//gets(str);
scanf("%d",&n);
for(a=0;a<n;a++){
	k=0,l=0,length=0,t=0,r=0,j=0,s=0,sum=0,v=0,u=0,y=0,m=0,d=0,U=0,flag=1;
//gets(str);
scanf("%s",&str);
for (length=0;str[length]!='\0';length++);
if  (length!=15&&length!=18)printf("Invalid\n");
else if (length==18){
	for(k=0;k<6&&str[k]!='\0';k++);
	for(l=0;l<4&&(Y[l]=str[k])!='\0';k++,l++);
	Y[l]='\0';
	for(k=0;k<10&&str[k]!='\0';k++);
	for(l=0;l<2&&(M[l]=str[k])!='\0';k++,l++);
	M[l]='\0';
	for(k=0;k<12&&str[k]!='\0';k++);
	for(l=0;l<2&&(D[l]=str[k])!='\0';k++,l++);
	D[l]='\0';
	for(k=0;k<14&&str[k]!='\0';k++);
	for(l=0;l<3&&(sub1[l]=str[k])!='\0';k++,l++);
	sub1[l]='\0'; 
	//for(k=0;k<17&&str[k]!='\0';k++);
	//for(l=0;l<1&&(sub2[l]=str[k])!='\0';k++,l++);
	//sub2[l]='\0'; 
	
	//puts(Y);puts(M);puts(D);puts(sub);
	//puts(sub1);
	y=atoi(Y);
	m=atoi(M);
	d=atoi(D);
	t=atoi(sub1);//printf("t=%d\n",t);
	//r=atoi(sub2);
	if(y>=1900&&t>995){
	printf("Invalid\n");
	break;
	}
if ((m<1||m>12)&&(d>31||d<1))flag=0;
else if(m>12||m<1)flag=0;
else if(m<13&&d>31||d<1)flag=0;
else if(m<13&&d>30&&m==4||m==6||m==9||m==11)flag=0;
else if(m==2&&(y%4==0&&y%100!=0||y%400==0?d>29:d>28))flag=0;
if(flag==0){
printf("Invalid\n");break;
}
	for(j=0;str[j+1]!='\0';j++){
		s=(int)str[j]-48;
		switch(j){
			case 0:v=7;break;case 4:v=8;break;case  8:v=6;break;case 12:v=10;break;case 16:v=2;break;
			case 1:v=9;break;case 5:v=4;break;case  9:v=3;break;case 13:v=5;break;
			case 2:v=10;break;case 6:v=2;break;case 10:v=7;break;case 14:v=8;break;
			case 3:v=5;break;case 7:v=1;break;case 11:v=9;break;case 15:v=4;break;	
		}
		sum+=s*v;
		//printf("s=%d,v=%d\n",s,v);
	}
	u=sum%11;
	switch(u){
		case 0:U='1';break;case 4:U='8';break;case 8:U='4';break;
		case 1:U='0';break;case 5:U='7';break;case 9:U='3';break;
		case 2:U='X';break;case 6:U='6';break;case 10:U='2';break;
		case 3:U='9';break;case 7:U='5';break;
	}
    if(U!=str[17])printf("Invalid\n");
	else printf("Valid\n");
}
else if(length==15){
	for(k=0;k<12&&str[k]!='\0';k++);
	for(l=0;l<3&&(sub1[l]=str[k])!='\0';k++,l++);
	sub1[l]='\0'; 
	//puts(sub1);
	t=atoi(sub1);
		for(i=15;i>5;i--){
			str[i+2]=str[i];
	}
	str[6]='1';
	if(t>995)str[7]='8';
	else str[7]='9';
	for(j=0;str[j]!='\0';j++){
		s=(int)str[j]-48;
		switch(j){
			case 0:v=7;break;case 4:v=8;break;case  8:v=6;break;case 12:v=10;break;case 16:v=2;break;
			case 1:v=9;break;case 5:v=4;break;case  9:v=3;break;case 13:v=5;break;
			case 2:v=10;break;case 6:v=2;break;case 10:v=7;break;case 14:v=8;break;
			case 3:v=5;break;case 7:v=1;break;case 11:v=9;break;case 15:v=4;break;	
		}
		//printf("s=%d,v=%d\n",s,v);
		sum+=s*v;
	}
	u=sum%11;
	switch(u){
		case 0:U='1';break;case 4:U='8';break;case 8:U='4';break;
		case 1:U='0';break;case 5:U='7';break;case 9:U='3';break;
		case 2:U='X';break;case 6:U='6';break;case 10:U='2';break;
		case 3:U='9';break;case 7:U='5';break;
	}
	str[17]=U;
	//str[17]=(char)U;
	str[18]='\0';
	puts(str);
}

}
	
return 0;	
}
