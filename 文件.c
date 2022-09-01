#include <stdio.h>
#include<stdlib.h>
int main(){
	FILE*fp;
	char name[100],str[2000];
	int line=0;
	int cnt=0;
	scanf("%s",name);
	scanf("%d",&line); 
	if((fp=fopen(name,"r"))==NULL){
		printf("File Name Error.\n");
		exit(1);
	}
	else{
		while(cnt<line){	
			cnt++;
			if((fgets(str,2000,fp))==NULL){
				printf("Line No Error.\n");
				exit(1);
			}
		}
		printf("%s",str);
	}
	return 0;
} 
