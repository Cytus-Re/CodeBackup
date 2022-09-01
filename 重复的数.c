#include <stdio.h>
#include <string.h>
char str[1000][1000];
int main(){
	int exit=0;
	int n=0,m=0;
	int i=0,j=0,k=0; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%s",str[j]);
		}
		//for(k=0;k<m;k++){
		//printf("%s",str[k]);
	//}
	for(i=0;i<m;i++){
		for(j=0;j<i;j++){
			if(strcmp(str[i],str[j])==0&&(i!=j)){
				printf("%s\n",str[i]);
				exit=0;break;
			}
			
		}
		if(exit)break;
	}	
}
return 0;
}
