#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int         data;
	struct node * next;
} NODE;
void change( int , int , NODE * );
void output(NODE*);
int main()
{
	int n, m;
	NODE * head, * pring;
	scanf("%d%d", &n, &m);
	head = (NODE *)malloc( sizeof(NODE) );
	head->next = NULL;
	head->data = -1;
	change(n,m,head);
	output(head);
	return 0;
}
void output(NODE*head){
	NODE *p;
	p=head->next;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
}
void change( int n, int m, NODE *head )
{
	int temp,flag=1;
	NODE *p=NULL,*q=NULL,*tail=head;
/*	p=(NODE*)malloc(sizeof(NODE));
	p->data=0;
	tail->next=p;
	tail=p;
	p->next=NULL;*/
	while (flag&&n){
		n*=10;
		temp=n/m;
		for(q=head;q;q=q->next){
			if(temp==q->data){
				//tail->next=q;
				flag=0;
				break;
			}
		}
		if(!flag)continue;	
		p=(NODE*)malloc(sizeof(NODE));
		p->data=temp;
		tail->next=p;
		tail=p;
		p->next=NULL;
		n=n%m;
	}
}
