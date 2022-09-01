#include <stdio.h>
int main(){
int n,i,num=1; 
scanf("%d",&n);
for(i=n;i>1;i--){
	num=(num+i-1)*2;
}
num==1?printf("The monkey got %d peach in first day.\n",num):printf("The monkey got %d peaches in first day.\n",num);
}
