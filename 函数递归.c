    /* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
     
    #include <stdio.h>  
    int findf(int n){
    	int temp;
    	if(n>=0&&n<=4){
    		return 1;
		}
		else if(n>4&&n%2==0){
			temp=findf(n-1)+findf(n-3);
			return temp;
		}
		else if(n>4&&n%2!=0){
			temp=findf(n-2)+findf(n-4);
			return temp;
		}
		else return -1;
	}
    int main()  
    {  int n,s, findf( int );  
       scanf("%d", &n);  
       s = findf(n);  
       printf("%d\n", s);  
       return 0;  
    }  
      
    /* PRESET CODE END - NEVER TOUCH CODE ABOVE */  
