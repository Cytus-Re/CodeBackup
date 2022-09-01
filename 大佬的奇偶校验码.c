#include <stdio.h>    
  
int main()    
{    
    int a[500][500]={0};  
    int m,n;    
    int i,j,temp,end;  
    int wronghang=0,wronglie=0;   
        
    scanf("%d %d",&m,&n);    
    for(i=0;i<m;i++)  
        for(j=0;j<n;j++)  
            scanf("%d",&a[i][j]);  
    for(i=0;i<m;i++)  
    {  
        temp=0;  
        for(j=0;j<n-1;j++)  
            if(a[i][j]==1)  
                temp+=1;  
        if(temp%2==0&&a[i][n-1]==1)  
            wronghang+=1;  
        else if(temp%2==1&&a[i][n-1]==0)  
            wronghang+=1;  
    }  
      
    for(j=0;j<n;j++)  
    {  
        temp=0;  
        for(i=0;i<m-1;i++)  
            if(a[i][j]==1)  
                temp+=1;  
        if(temp%2==0&&a[m-1][j]==1)  
            wronglie+=1;  
        else if(temp%2==1&&a[m-1][j]==0)  
            wronglie+=1;      
    }  
    end=wronghang>wronglie?wronghang:wronglie;  
    printf("%d\n",end);    
    return 0;    
}
