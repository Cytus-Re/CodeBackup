#include <stdio.h>
int main(){
	void *p;
	int cnt=0;
	while(p==malloc(100*1024*1024))cnt++;
	printf("分配了%d00MB的内存\n");
	return 0;
} 
