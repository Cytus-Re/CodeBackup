#include <stdio.h>
#include <stdlib.h>
typedef struct link{
	int num;
	struct link* next;
}node;
node *head;
void setlink(node* head,int m){
	node* p=NULL;
	p=(node*)malloc(sizeof(node*));
	p->num=m;
	p->next=head->next;
	head->next=p;
}
void output(node* head){
	node* p=head->next;
	p=p->next;
	while(p){
		printf("%d ",p->num);
			p=p->next;
	
	}
}
int main(){
	node*head;
	head=(node*)malloc(sizeof(node*));
	head->next=NULL;
	head->num=-1;
	int n=0;
	do 
	{	
		scanf("%d",&n);
		setlink(head,n);
	}while(n!=-1);
	output(head);
	return 0;
} 
