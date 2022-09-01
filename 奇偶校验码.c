#include <stdio.h>
int main(){
	int a[1000][120]; 
	int n=0,m=0,i=0,j=0,k=0,t=0,temp=0,wrong1=0,wrong2=0;;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//int cnt1[1000]={0};
		for(i=0;i<m;i++){
			//k++;
			temp=0;
		for(j=0;j<n-1;j++)
		if(a[i][j]==1)
		//printf("i=%d,j=%d\n",i,j);
	//	cnt1[k]++;
			temp++;
			if(temp%2==0&&a[i][n-1]==1)  
            wrong1++;  
        else if(temp%2==1&&a[i][n-1]==0)  
            wrong1++;  
		
	
}
	//int cnt2[120]={0};
		for(j=0;j<n;j++){
			//t++;
			temp=0;  
		for(i=0;i<m-1;i++)
		if(a[i][j]==1)//cnt2[t]++;
			temp++;
			 if(temp%2==0&&a[m-1][j]==1)  
            wrong2++;  
        else if(temp%2==1&&a[m-1][j]==0)  
            wrong2++;
		
		
	}
/*	for(i=0;i<m;i++){
		if(cnt1[i]%2==1)wrong1++;
	//printf("cnt1(%d)=%d\n",i,cnt1[i]);
	}
	for(i=0;i<n;i++){
		if(cnt2[i]%2==1)wrong2++;
	//printf("cnt2(%d)=%d\n",i,cnt2[i]);
	}*/
	int result=0;
	result=(wrong1>wrong2?wrong1:wrong2);
	printf("%d\n",result);
	return 0;}	

