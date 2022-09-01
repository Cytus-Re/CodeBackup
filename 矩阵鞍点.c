    #include <stdio.h>  
    int main(){  
    int x,y,t,s=10000,m=-9999,n,exit=0,v=-1,i,j,p=-1;  
    scanf("%d %d",&x,&y);  
    int a[x][y];  
    for(i=0;i<x;i++){  
        for(j=0;j<y;j++){  
            scanf("%d",&a[i][j]); 
			//printf("%d",a[i][j]);
        }  
    }  
    //printf("%d\n",a[0][2]);
    for(i=0;i<x;i++){  
        for(j=0;j<y;j++){  
            if(a[i][j]>m){  
                m=a[i][j];  
                n=j;  
                p=i;  
        }  
        }  
        for(t=0;t<x;t++){  
            if(a[t][n]<s){  
                s=a[t][n];  
                v=t;  
            }  
            } 
        if((v==p)&&v!=-1){  
                exit=1;
				break;  
            }    
        else {m=-9999;s=10000;}  
    }  
      
    if(exit)printf("Point:a[%d][%d]==%d\n",p,n,a[p][n]) ;  
    else printf("No Point\n");    
    return 0;  
        }  
