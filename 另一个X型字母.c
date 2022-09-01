#include <stdio.h>
int main()
{
	char ch;
	int n;
	scanf("%d %c",&n,&ch);
	int k,i;
	if(ch=='C'||ch=='H'||ch=='E'||ch=='N'||ch=='T'||ch=='R'||ch=='Y')ch++;
	for(k=1; k<=2*n-1; k++) {
		if(k<=n) {
			for(i=1; i<=2*n-k; i++) {
				if(k==1||i==k||i==2*n-k) {
					printf("%c",ch);
					ch++;
					if(ch=='C'||ch=='H'||ch=='E'||ch=='N'||ch=='T'||ch=='R'||ch=='Y')ch++;
					if(ch>'Z')ch='A';
					}
					else printf(" ");
					//else if(i==k||i==2*n-k)printf("")
			}
		}
		else{
			for(i=1;i<=k;i++){
				if(k==2*n-1||i==2*n-k||i==k){
					printf("%c",ch);
					ch++;
					if(ch=='C'||ch=='H'||ch=='E'||ch=='N'||ch=='T'||ch=='R'||ch=='Y')ch++;
					if(ch>'Z')ch='A';
					}
					else printf(" ");
				}
			}
			printf("\n");
		}
return 0;
	}

