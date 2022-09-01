#include <stdio.h>
#include <string.h>
int main(){
	char s[10005] ,t[10005];
	scanf("%s",s);
	scanf("%s",t);
	int i=0,j=0,ans=0,m=0;
	for(i=0;s[i]!='\0';i++){
		int temp=0;
		m=i;
		for(j=0;t[j]!='\0';j++){
			if(t[j]!=s[m]){
				break;
			}
			else {
				temp++;
				m++;
			}
			//printf("%d %c\n",temp,s[j]);
		}
		ans+=temp;
	}
	printf("%d\n",ans);
}
