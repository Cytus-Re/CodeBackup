#include <stdio.h>
int main(){
	char str[1000];
	scanf("%s",str);
	int i=0,a[30];
	for(i=0;i<30;i++){
		a[i]=1;
	}
	for(i=0;str[i]!='\0';i++){
		if(str[i]==str[i+1]&&str[i]<='z'&&str[i]>='a'){
			a[str[i]-'a']++;
		}
		else if(str[i-1]==str[i]&&str[i]!=str[i+1]&&str[i]<='z'&&str[i]>='a'){
		printf("%d%c",a[str[i]-'a'],str[i]);
		a[str[i]-'a']=1;}
		else if(str[i]!=str[i-1]&&str[i]!=str[i+1]&&i>0&&str[i]<='z'&&str[i]>='a')printf("%c",str[i]);
		else if(str[i]!=str[i+1]&&i==0&&str[i]<='z'&&str[i]>='a')printf("%c",str[i]);
		else printf("%c",str[i]);
		}
	printf("\n");
	return 0;
}
