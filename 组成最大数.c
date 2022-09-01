#include <stdio.h>
int main(){
	char str[1500];
	gets(str);
	char t;
	int m=0,i=0,j=0,a=0,b=0;
	for(i=0;str[i]!='\0';i++){
		m=i;
		for(j=i;str[j]!='\0';j++){
			a=(int)str[j]-'0';
			b=(int)str[m]-'0';
			if(a>=b)m=j;
		}
		if(m!=i){
			t=str[i];
			str[i]=str[m];
			str[m]=t;
		}
	}
	puts(str);
return 0;
	
}
