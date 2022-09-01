#include <stdio.h>
#include <string.h>
typedef struct water{
	char name[25];
	char num[1005];
}w;
int compare(char*str1,char*str2){
	int l1=0,l2=0,ret=0,t=0;
	l1=strlen(str1);
	l2=strlen(str2);
	t=strcmp(str1,str2); 
	if(l1>l2)ret=1;
	else if(l1<l2)ret=-1;
	else{
		if(t==0)ret=0;
		else if(t==-1)ret=-1;
		else if(t==1)ret=1;
	}
	return ret;
}
int main(){
	w king[1100]={{"0","0"}};
	int n=0;
	scanf("%d%*c",&n);
	int i=0;
	for(i=0;i<n;i++){
		scanf("%s",king[i].name);
		scanf("%s",king[i].num);
	}
//	printf("name=%s,num=%s\n\n\n\n",king[0].name,king[0].num);
	for(i=0;i<n-1;i++){
		int j=0;
		for(j=0;j<n-i-1;j++){
			int c=0,d=0;
			c=compare(king[j].num,king[j+1].num);
			d=strcmp(king[j].name,king[j+1].name);
			if(c==-1){
				w temp;
				temp=king[j];
				king[j]=king[j+1];
				king[j+1]=temp;
			}
			else if(c==0&&(d>0)){
				w temp={"0","0"};
				temp=king[j];
				king[j]=king[j+1];
				king[j+1]=temp;
			}
		}
	}
//	printf("name=%s,num=%s\n\n\n\n",king[0].name,king[0].num);
	for(i=0;i<n;i++){
		printf("%s\n",king[i].name);
	}
	return 0;
}
