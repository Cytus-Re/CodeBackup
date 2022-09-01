#include <stdio.h> 
int main(void)
{ 
    int p=-1,n,i=0,j,x=0,flag=0;
    char c,s[100];     
    while(scanf("%c",&c)&&c!='e'&&c!='E')          
        if(c=='.') p=i-1;             
        else if(c<='9'&&c>='0') s[i]=c,i++;           
        else if(c=='-') x=1;            
        else if(p<0) p=i-1;       
    for(j=i;j<=60;j++)
        s[j]='0';       
        scanf("%d",&n);       
        p+=n;       
    if(x==1) printf("-");     
    if(p<0)     
    {
        p=-p-1;         
        printf("0.");           
        for(i=1;i<=p&&i<=8;i++)        
            printf("0");        
        for(i=1;i<=8-p;i++)          
            printf("%c",s[i-1]);  
    }
    else    
    {  
        i=0;
		while(i<=p) 
        {   
            if(s[i]=='0'&&!flag&&i<p) i++;       
            else
            {
            	flag=1;printf("%c",s[i++]);
			} 
		}            
        printf(".");            
        for(j=1;j<=8;j++)         
        	printf("%c",s[i++]);
	}        
    printf("\n");      
    return 0;
}
