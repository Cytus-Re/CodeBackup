# include <stdio.h>
int main(){
int i=0,j=0,m=0,length1=0,length2=0,k=0;
char str1[100]={127},str2[100]={127},str3[100]={127};
gets(str1);
gets(str2);
//puts(str1);
for(length1=0;str1[length1]!='\0';length1++);
for(length2=0;str2[length2]!='\0';length2++);
if(length1>=length2){
for(i=0;str1[i]!='\0';i++){
	while(str2[k]<str1[0]&&str2[k]!='\0'){
				str3[m]=str2[k];m++;k++;
			}
	str3[m]=str1[i];m++;
	for(j=0;str2[j]!='\0';j++){
		if(str2[j]>=str1[i]&&str2[j]<str1[i+1]){
			str3[m]=str2[j];m++;
		}
		else if(str1[i+1]=='\0'&&j>=i){
		str3[m]=str2[j];m++;
		}
		else if(str2[j]>=str1[i]&&i==length1-1){
		str3[m]=str2[j];m++;
		}
	}
}
}
else{
	for(i=0;str2[i]!='\0';i++){
	while(str1[k]<str2[0]&&str1[k]!='\0'){
				str3[m]=str1[k];m++;k++;
			}
	str3[m]=str2[i];m++;
		for(j=0;str1[j]!='\0';j++){
			if(str1[j]>=str2[i]&&str1[j]<str2[i+1]){
			str3[m]=str1[j];m++;
			}
			else if(str2[i+1]=='\0'&&j>=i){
			str3[m]=str1[j];m++;
			}
			else if(str1[j]>=str2[i]&&i==length2-1){
			str3[m]=str1[j];m++;
		}
		}
	}
}
puts(str3);
return 0;
} 
