# include <stdio.h>
int main(){
char a[20],b[20];
int m,n;
int i,k,l;
gets(a);
m=6;
n=14;
for(i=0;i<m&&a[i]!='\0';i++);
for(k=0;k<n&&(b[k]=a[i])!='\0';i++)k++;
b[n]='\0';
puts(b);
	
	
	
return 0;	
}
