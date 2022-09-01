#include <stdio.h>
#include <string.h>
char str1[100015],str2[100004],str3[100004];
int a1[127]= {0},a2[127]= {0},a3[127]= {0};
int l1=0,l2=0,l3=0,i=0,j=0,m1=0,m2=0,m3=0,point1=0,point2=0,point3=0,n=0;
int main()
{
	scanf("%d%*c",&n);
	gets(str1);
	gets(str2);
	gets(str3);
	l1=strlen(str1);
	l2=strlen(str2);
	l3=strlen(str3);
	for(i=0; i<l1; i++) {
		a1[str1[i]]++;//printf("a1=%d\n",a1[4]);
	}
	for(j=0; j<127; j++) {
		if(a1[j]>=m1)m1=a1[j];//printf("a1[%d]=%d,m1=%d\n",j,a1[j],m1);
	}
	if(l1==m1&&n==1)point1=m1-1;
	else if(n>l1-m1)point1=l1;
	else point1=m1+n;


	for(i=0; i<l2; i++) {
		a2[str2[i]]++;
	}
	for(j=0; j<127; j++) {
		if(a2[j]>=m2)m2=a2[j];
	}
	if(l2==m2&&n==1)point2=m2-1;
	else if(n>l2-m2)point2=l2;
	else point2=m2+n;


	for(i=0; i<l3; i++) {
		a3[str3[i]]++;
	}
	for(j=0; j<127; j++) {
		if(a3[j]>=m3)m3=a3[j];
	}
	if(l3==m3&&n==1)point3=m3-1;
	else if(n>l3-m3)point3=l3;
	else point3=m3+n;
	//printf("p1=%d,p2=%d,p3=%d m1=%d,m2=%d,m3=%d\n",point1,point2,point3,m1,m2,m3);
	if(point1==point2&&point1==point3&&point3==point2)printf("Excellent\n");
	if((point1==point2&&point2>point3)||(point1==point3&&point3>point2)||(point3==point2&&point2>point1))
		printf("Excellent\n");
	else if(point1>point2&&point1>point3)printf("Beibei\n");
	else if(point2>point1&&point2>point3)printf("Lili\n");
	else if(point3>point1&&point3>point2)printf("Gonggong\n");
	return 0;
}
