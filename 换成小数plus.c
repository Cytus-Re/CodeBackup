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
void output(NODE*head)
{
	NODE *p;
	p=head->next;
	while(p!=NULL) {
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
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
