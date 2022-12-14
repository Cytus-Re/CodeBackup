    /* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
     
    #include <stdio.h>  
    #include <stdlib.h>  
      
    typedef struct sdata  
    {  int num;  
       struct sdata *next;  
    };  
    typedef struct sdata SNODE;  
    void movenode( SNODE *, int );  
      
    void setlink( SNODE * head, int n )  
    {     
        SNODE *p;  
      
        while ( n > 0 )  
        {   p = ( SNODE * ) malloc( sizeof( SNODE ) );  
            p->num = n;  
            p->next = head->next;  
            head->next = p;  
            n --;  
        }  
    }  
      
    void outlink( SNODE * head )  
    {  
        while( head->next != NULL )  
        {  
            head = head->next;  
            printf( "%d,", head->num );  
        }  
        return;  
    }  
      
    int main( )  
    {   int n, m;  
        SNODE * head = NULL;  
      
        scanf("%d%d", &n, &m );  
        head = ( SNODE * ) malloc( sizeof( SNODE ) );  
        head->num = -1;  
        head->next = NULL;  
        setlink( head, n );  
      
        movenode( head, m );   /* This is waiting for you. */  
      
        outlink( head );  
        printf("\n");  
        return 0;  
    }  
      void movenode( SNODE *head, int m ){
      	SNODE *p=head, *q=NULL,*r=NULL;
      	for(q=NULL,p=head;p;q=p,p=p->next){
      		if(p->num==m&&q!=head){
      			r=(SNODE*)malloc(sizeof(SNODE));
      			r->num = m;
      			r->next = head->next ;
      			head->next = r;
      			q->next = p->next ;
      			free(p);
      			break;
			  }
			else;
		}
	  }
    /* PRESET CODE END - NEVER TOUCH CODE ABOVE */   
