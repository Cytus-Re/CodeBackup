/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include <stdio.h>  
struct nn  
{  int no;     
   int num;     
};  
  
typedef struct nn DATA;  
  
int number( char * , DATA []);  
  
int main( )  
{     
   DATA b[100];    
   char sa[500];    
   int i, n;    
   gets( sa );   
   n = number( sa, b );    
   for ( i=0; i<n; i++ )   
       printf("%d %d\n", b[i].num, b[i].no );   
   return 0;  
}  

int number( char * str, DATA a[] ) 
  { 
     int i=0,t=0,k=0,j=0,l=0,ret=0,fu=0,temp=0;
     for(t=0;t<100;t++){
     	a[t].num=0;
	 }
	 while(str[i]!='\0'){
	 	//i++;
	 	
	 	if(str[i]>='0'&&str[i]<='9'){
	 		temp=(int)str[i]-'0';
	 		if(fu){
			 temp=-temp;
			 fu=0;
			 }
	 		a[k].num=temp+a[k].num*10;
	 		//printf("temp=%d,num=%d,k=%d\n",temp,a[k].num,k);
		 }
		 else if(str[i]=='-')fu=1;
		 else k++;
		 i++;
	 }
	 ret=k+1;
	 for(j=0;j<k+1;j++){
	 	a[j].no=1;
	 	for(l=0;l<k+1;l++){
	 		if(a[j].num>a[l].num)a[j].no++;
	 		if(a[j].num==a[l].num&&j!=l){
	 			if(j>l)a[j].no++; 
			 }
	 		//printf("num=%d,no=%d,j=%d\n",a[j].num,a[j].no,j);
		 }
	 }		 
	 return ret;
  } 
