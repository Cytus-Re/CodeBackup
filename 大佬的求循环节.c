void change( int n, int m, NODE * head )
{
	int n0,m0,c,i,j=0,k=1;
	int n1=n,m1=m;
	char str[1001]= {0};
	while(1) {
		if(n1/10!=0) {
			k++;
			n1/=10;
		} else
			break;
	}
	n0=k;
	k=1;
	while(1) {
		if(m1/10!=0) {
			k++;
			m1/=10;
		} else
			break;
	}
	m0=k;
	k=1;
	for(i=0; i<1000; i++) {
		if(n0<m0) {
			str[j++]='0';
			n*=10;
			n0++;
		} else {
			c=n/m;
			str[j++]='0'+c;
			n=n%m;
			n1=n;
			while(1) {
				if(n1/10!=0) {
					k++;
					n1/=10;
				} else
					break;
			}
			n0=k;
			k=1;
			n*=10;
			n0++;
		}
	}
	NODE *p,*q=head;
	for(i=1; i<1001; i++) {
		p=(NODE*)malloc(sizeof(NODE));
		p->data=str[i]-'0';
		p->next=NULL;
		q->next=p;
		q=p;
	}
	q=head->next;
}
NODE * find( NODE * head, int * n )
{
	int i,j,k,flag=0;
	NODE *p,*q,*pring,*r1,*s1,*r2,*s2,*r3,*s3;
	for(p=head->next; p->next!=NULL; p=p->next) {
		for(q=p->next,i=0; q->next!=NULL; q=q->next,i++) {
			if(p->data==q->data) {
				r1=p->next;
				s1=q->next;
				r2=r1->next;
				s2=s1->next;
				r3=r2->next;
				s3=s2->next;
				if(r1->data==s1->data&&r2->data==s2->data&&r3->data==s3->data) {
					flag=1;
					pring=p;
					j=i;
					break;
				}
			}
		}
		if(flag)
			break;
	}
	pring=p;
	*n=j+1;
	for(k=0; k<j; k++)
		p=p->next;
	p->next=pring;
	if(pring->data==0&&pring->next==pring) {
		*n=0;
		return NULL;
	} else
		return pring;
}
