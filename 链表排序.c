    /* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
     
    #include "stdio.h"  
    #include "stdlib.h"  
    struct node  
    {   int data;  
        struct node * next;  
    } ;  
      
    typedef struct node NODE;  
    typedef struct node * PNODE;  
    void outlist( PNODE );  
    void sortlist( PNODE h, int num );
    int main ( )  
    {   int num=1;  
        PNODE head;  
      
        head = (PNODE)malloc( sizeof(NODE) );  
        head->next = NULL;  
        head->data = -1;  
      
        while ( num!=0 )  
        {   scanf("%d", &num);  
            if ( num!=0 )  
                sortlist( head, num);  
        }  
        outlist( head );  
        return 0;  
    }  
      
    void outlist( PNODE head )  
    {   PNODE p;  
        p = head->next;  
        while ( p != NULL )  
        {   printf("%d\n", p->data);  
            p = p->next;  
        }  
    }  
      
    /* This is an example for list. Please programme your code like it. 
    sortlist( PNODE h, int num ) 
    {   PNODE p; 
        p = (PNODE)malloc( sizbeof(NODE) ); 
        p->data = num; 
        p->next = h->next; 
        h->next = p; 
    } 
    */  
      void sortlist( PNODE h, int num ){
      	PNODE n,p,q,tail=h; 
      	int flag=1;
     	n=(PNODE)malloc(sizeof(PNODE));
     	n->data=num;
     	for(p=h,q=p->next;p,q;p=p->next,q=q->next){
     		if(n->data==p->data||n->data==q->data){
     			flag=0;
     			break;
			 }
     		if(n->data>p->data&&n->data<q->data){
     			//printf("p=%d,q=%d,n=%d\n",p->data,q->data,n->data);
     			n->next=q;
     			p->next=n;
     			flag=0;
     			break;
			 }
		 }
      if(flag){
      	while(tail->next!=NULL){
     		tail=tail->next;
     		//printf ("tail=%d\n",tail->data);
		 }
		tail->next=n;
		n->next=NULL;
	  }	  
	  }
    /* PRESET CODE END - NEVER TOUCH CODE ABOVE */  
