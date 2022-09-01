#include <stdio.h>  
int main(){ 
char a[100]={0},b[100]={0};
int i,j,k,m=0,flag=1;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++){
	for(j=0;j<m+1;j++){
		if(a[i]==b[j]){
			flag=0;
		}	
		}
		if(flag){
			b[m]=a[i];m++;
	}
	flag=1;
}
	printf("%s\n",b);

return 0; 
} 
