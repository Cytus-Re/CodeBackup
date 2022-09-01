#include <stdio.h>  
int main(){  
    int N,cnt=0,i,j,x,m=1,n=0,t=1;  
    scanf("%d",&N);  
    int a[N];  
    for(i=0;i<N;i++){  
        scanf("%d",&x);  
        a[i]=x;  
    }  
for(j=0;j<N;j++){
if(j!=N-1){
    if(a[j]>=a[j+1]&&cnt==0){
	cnt++;
	t=j+1;
}
else if(a[j]>=a[j+1])cnt++;
    if(((a[j]<a[j+1])&&(cnt!=0))||j==N-2){  
        if(n<cnt){  
        n=cnt;  
        m=t;  
        }  
        cnt=0;  
    }  
}
else{
	break;
}   
}
     printf("%d %d\n",m,m+n);   
    return 0;  
} 
