/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int         data;
	struct node * next;
} NODE;

NODE * find( NODE * , int * );
void outputring( NODE * );
void change( int , int , NODE * );

void outputring( NODE * pring )
{
	NODE * p;
	p = pring;
	if ( p == NULL )
		printf("NULL");
	else
		do {
			printf("%d", p->data);
			p = p->next;
		} while ( p != pring );
	printf("\n");
	return;

}

int main()
{
	int n, m;
	NODE * head, * pring;

	scanf("%d%d", &n, &m);
	head = (NODE *)malloc( sizeof(NODE) );
	head->next = NULL;
	head->data = -1;

	change( n, m, head );
	pring = find( head, &n );
	printf("ring=%d\n", n);
	outputring( pring );

	return 0;
}

void change( int n, int m, NODE *head )
{
	int temp,cnt=0;
	NODE *p=NULL,*q=NULL,*tail=head;
	while (cnt<1000&&n!=0) {
		n*=10;
		temp=n/m;
		cnt++;
		p=(NODE*)malloc(sizeof(NODE));
		p->data=temp;
		tail->next=p;
		tail=p;
		p->next=NULL;
		n=n%m;
	}
}
NODE * find( NODE *head , int *n )
{
	NODE *p=NULL,*q=NULL,*r=NULL,*s=NULL,*v=NULL,*pring=NULL;
	int flag=1,cnt=0,i=0,exit=0,k=0;
	for(p=head->next;p;p=p->next){
		for(q=p->next,cnt=0;q;q=q->next,cnt++){
			//printf("p=%d,q=%d\n",p->data,q->data);
			if(p->data==q->data){
				for(r=p->next,s=q->next,i=0;i<=cnt;r=r->next,s=s->next,i++){
					if(r->data!=s->data){
						flag=0;
						break;
					}
					else if(flag&&i==cnt){
						cnt++;
						exit=1;
						break;
					}
				}
				//if(exit)break;
			}
			if(exit)break;
		}
		if(exit)break;
	}
	for(v=head;v&&k<100;v=v->next,k++){
		v=v->next;
	}
	if(k<100){
		*n=0;
		pring=NULL;
	}
	else if(exit||k<100){
		int j=0;
		*n=cnt;
		pring=p;
		for(j=0;j<*n-1;j++)p=p->next;
		p->next=pring;
	}
	return pring;
}
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
