/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

typedef struct sdata
{
	int num;
	int please_ignore_this;//please ignore this. You are not expected to touch this value or you will be regarded as cheat.
	struct sdata *next;
} SNODE;

void exchagenode( SNODE *, int ,int);

int getnum()
{
	int num;
	scanf("%d",&num);
	return num;
}

void setlink( SNODE * head, int n )
{
	SNODE *p,*pre=head;

	while ( n > 0 )
	{
		p = ( SNODE * ) malloc( sizeof( SNODE ) );
		p->num = p->please_ignore_this = getnum();
		p->next = NULL;
		pre->next = p;
		n --,pre=p;
	}
}

void outlink( SNODE * head )
{
	while( head->next != NULL )
	{
		head = head->next;
		printf( "%d ", head->num );
		if(head->num!=head->please_ignore_this)
			printf("fy");
	}
	return;
}

int main( )
{
	int n, x, y;
	SNODE * head = NULL;

	scanf("%d", &n);
	head = ( SNODE * ) malloc( sizeof( SNODE ) );
	head->num = -1;
	head->next = NULL;
	setlink( head, n );
	scanf("%d%d",&x,&y);
	exchagenode( head, x, y );   /* This is waiting for you. */
	outlink( head );
	printf("\n");
	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
void exchagenode( SNODE *head, int x ,int y){
	int cnt1=0,cnt2=0;
	SNODE *p=NULL, *q=NULL, *prep=NULL,*postp=NULL,*preq=NULL,*postq=NULL;
	p=head->next;
	prep=head;
	while(p->num!=x){
		p=p->next;
		prep=prep->next;
		cnt1++;
	}
	postp=p->next;
	q=head->next;
	preq=head;
	while(q->num!=y){
		q=q->next;
		preq=preq->next;
		cnt2++;
	}
	postq=q->next;
	if(p->next!=q&&q->next!=p){
	prep->next=q;
	preq->next=p;
	p->next=postq;
	q->next=postp;}
	else if(cnt1<cnt2){
		prep->next=q;
		q->next=p;
		p->next=postq;
	}
	else{
		preq->next=p;
		p->next=q;
		q->next=postp;
	}
}
