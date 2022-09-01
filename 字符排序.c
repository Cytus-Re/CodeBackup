#include <stdio.h> 
#include<string.h>
int main(){
     char str[10000],str1[100000];
     int i=0,j=0,t=0,k=0,m=0,l=0;
     gets(str);
     //scanf("%s",str)
     for(i=0;str[i]!='\0';i++){
         m=i;
         for(j=i;str[j]!='\0';j++){
             if(str[j]>=str[m])m=j;
         }
         if(str[m]!=str[i]){
             t=str[m];
             str[m]=str[i];
             str[i]=t;
         }
     }
     for(k=0;str[k]!='\0';k++){
     	if(str[k]>='0'&&str[k]<='9')str1[l++]=str[k];
	 }
	 for(k=0;str[k]!='\0';k++){
     	if(str[k]>='a'&&str[k]<='z')str1[l++]=str[k];
	 }
	 for(k=0;str[k]!='\0';k++){
     	if(str[k]>='A'&&str[k]<='Z')str1[l++]=str[k];
	 }
	 str1[l]='\0';
    puts(str1);
    return 0;
}   
