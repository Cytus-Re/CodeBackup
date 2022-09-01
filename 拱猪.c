#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct player {
	int n;
	char pai[100][5];
	int score;
} Player;
int C10(Player *p);
int S12(Player *p);
int D11(Player *p);
int H(Player *p);
void Score(Player *p);
void output(Player *p,int i);
int main()
{
	while (1) {
		int n=0,i=0,j=0;
		int cnt=0;
		Player player[5];
		for(i=0;i<4;i++){
			player[i].n=0;
			player[i].score=0;
			int j=0;
			for(j=0;j<100;j++){
			strcpy(player[i].pai[j],"0");
			}
		}
		for(j=0; j<4; j++) {
			scanf("%d",&n);
			if(n) {
				player[j].n=n;
				int t=0;
				for(t=0; t<player[j].n; t++) {
					scanf("%s",player[j].pai[t]);
				}
			} else {
				player[i].score=0;
				cnt++;
				continue;
			}
		}
		if(cnt==4)break;
		else {
			for(i=0; i<4; i++) {
				if(player[i].n!=0&&player[i].n!=16) {
					Score(&player[i]);
					output(&player[i],i);
				} else if(player[i].n==0){
					output(&player[i],i);
				}else{
					player[i].score=1000;
					output(&player[i],i);
				}
			}
			printf("\n");
		}
	}
	return 0;
	//exit(0);
}
int H(Player *p)
{
	int i=0,j=0,cnt=0;
	char H[13][5]= {"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13"};
	int score[13]= {-50, -2,-3,-4,-5,-6,-7,-8,-9,-10,-20,-30,-40};
	for(i=0; i<13; i++) {
		for(j=0; j<p->n; j++) {
			if(strcmp(p->pai[j],H[i])==0) {
				cnt++;
				p->score+=score[i];
			//	printf("%s,%d\n",p->pai[j],p->score);
				break;
			}
		}
	}
	if(cnt==13) {
		p->score=200;
	}
	if(cnt==0)return 0;
	if(cnt!=13&&cnt!=0)return 1;
	if(cnt==13)return 2;
}
int C10(Player *p)
{
	int i,ret=0;
	for(i=0; i<p->n; i++) {
		if(strcmp(p->pai[i],"C10")==0) {
			ret=1;
			break ;
		}
	}
	return ret;
}
int S12(Player *p)
{
	int i,ret=0;
	for(i=0; i<p->n; i++) {
		if(strcmp(p->pai[i],"S12")==0) {
			ret=1;
			break ;
		}
	}
	return ret;
}
int D11(Player *p)
{
	int i,ret=0;
	for(i=0; i<p->n; i++) {
		if(strcmp(p->pai[i],"D11")==0) {
			ret=1;
			break ;
		}
	}
	return ret;
}
void Score(Player *p)
{
	int flag=0,h=0,S=0,D=0;
	h=H(p);
	if(h==2){
		flag=1;
	}
	if(S12(p)&&D11(p)&&flag) {
		p->score+=500;
		D=1;
		S=1;
	} else if(S12(p)) {
		p->score+=-100;
		S=1;
	} else if(D11(p)) {
		p->score+=100;
		D=1;
	}
	if(C10(p)) {
		if(!D&&!S&&!h){
		p->score=50;
		}
		else
		p->score*=2;
	}
}
void output(Player *p,int i){
	if(p->score<=0)
	printf("%d",p->score);
	else printf("+%d",p->score);
	if(i!=3)printf(" ");
}



