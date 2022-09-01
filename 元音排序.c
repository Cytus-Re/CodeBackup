#include<stdio.h>
int a[300]={0};
void put(char ch){
	int cnt=0;
	while(cnt<a[ch]){
		cnt++;
		putchar(ch);
	}
}
int main(){
	char ch;
	while((ch=getchar())!=EOF){
		a[ch]++;
	}
	put('a');
	put('e');
	put('i');
	put('o');
	put('u');
	put('A');
	put('E');
	put('I');
	put('O');
	put('U');
	//printf("\0");
	printf("\n");
	return 0;
}
