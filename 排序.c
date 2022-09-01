#include <stdio.h>  
int main(){  
long long int n,i,j,k,t,m;  
scanf("%lld",&n);  
long long int a[n];  
for(i=0;i<n;i++){  
    scanf("%lld",&a[i]);  
    }  
    for(m=0;m<n-1;m++){  
        for(j=0;j<n-m-1;j++){  
            if(a[j]>a[j+1]){  
                t=a[j];  
                a[j]=a[j+1];  
                a[j+1]=t;     
            }  
        }  
    }  
        for(k=0;k<n;k++){  
            printf("%lld",a[k]);  
            k==n-1?printf("\n"):printf(" ");  
        }  
      
return 0;     
}  
