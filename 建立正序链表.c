/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include "stdio.h"  
#include "stdlib.h"  
  
struct node  
{   int  data;  
    struct node * next;  
} ;  
  
typedef struct node NODE;  
typedef struct node * PNODE;  
  
void outlist( PNODE );  
int ins_list( PNODE, int );  
   
int main ( )  
{   int num=1;  
    PNODE head;  
  
    head = (PNODE)malloc( sizeof(NODE) );  
    head->next = NULL;  
    head->data = -1;  
  
    while ( num!=0 )  
    {   scanf("%d", &num);  
        if ( num!=0 )  
            ins_list( head, num);  
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
  
 //This is an example for list. Please programme your code like it. 
 
int ins_list( PNODE h, int num ) 
{ 
    PNODE p,tail=h;
    while(tail->next!=NULL){
    	tail=tail->next;
	}
    p=(PNODE)malloc(sizeof(NODE));
    p->data = num;
    p->next = NULL;
	tail->next=p;
} 
  
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */ 
