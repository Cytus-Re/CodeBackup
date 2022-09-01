#include <stdio.h>
int search(int key,int a[],int length){
	int ret=-1,i;
	for(i=0;i<length;i++){
		if(a[i]==key){
			ret=i;
			break;
		}
	}
	return ret;
} 
int main(){
	int a[]={2,32,65,23,74,3,74,34,};
	printf("%d",search(4,a,sizeof(a)/sizeof(a[0])));
}
