#include <stdio.h>
#include <math.h> 
int main(){
long long int n,k,K=0,i=0,I=0,m=1,a,b,c;
scanf("%lld",&n);
K=8*pow(2,n-1);
I=pow(2,n+2); 
for(k=1;k<=K;k++){
	for(i=1;i<=I;i++){
	    if((k==1&&i==1)||(k==1&&i==pow(2,n+2)||(k==K&&i==1)||(k==K&&i==pow(2,n+2))))printf("+");
	    //else if(((i==pow(2,n)+1)||(i==3*pow(2,n)-1))&&(k==K))printf("+");
	    else if((k==1||k==K))printf("-");
        else if((i==1||i==pow(2,n+2)))printf("|");	
		else if((k==pow(2,n+2)-3&&i==pow(2,n+1)-2)||(k==pow(2,n+2)-3&&i==pow(2,n+1)+2)||(k==K&&i==pow(2,n+1)-2)||(k==K&&i==pow(2,n+1)+2))printf("+");
		else if((k==pow(2,n+2)-3||k==K)&&(i>pow(2,n+1)-2)&&(i<pow(2,n+1)+2))printf("-");
		else if((i==pow(2,n+1)-2||i==pow(2,n+1)+2)&&(k>pow(2,n+2)-3&&k<K))printf("|");
		else printf(" ");
	}
	printf("\n");
}
return 0; 
}
