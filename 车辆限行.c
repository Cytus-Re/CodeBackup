include <stdio.h>
int main()
{int by=2012,bm=4,bd=9;
int ey,em,ed,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},t;
//scanf("%d%d%d",&by,&bm,&bd);
scanf("%d%d%d",&ey,&em,&ed);
for(t=0;(by!=ey||bm!=em||bd!=ed);t++){
	by%4==0&&by%100!=0||by%400==0?(m[2]=29):(m[2]=28);
    bd++;
     if(bd>m[bm]){
     	bd=bd-m[bm];
     	bm++;
	 }
	 if(bm>12){
	 	bm-=12;
	 	by++;
	 }
}
//t==1?printf("%d day\n",t):printf("%d days\n",t);
while (t>=364){
	t-=364;
}
int k=0,j=0,W=0;
k=t/91;
//if(k==0)k++; 
k=k%4;
if (em==1||em==2) 
   {
   em=em+12;
   ey=ey-1;} 
W= (ed+2*em+3*(em+1)/5+ey+ey/4-ey/100+ey/400)%7;
W=(W+1>6?0:W+1); 
switch(k){
	case 0:switch(W){
		case 1:printf("3 and 8.\n");break;
		case 2:printf("4 and 9.\n");break;
		case 3:printf("5 and 0.\n");break;
		case 4:printf("1 and 6.\n");break;
		case 5:printf("2 and 7.\n");break;
		default:printf("Free\n");break;
	}break;
	case 1:switch(W){
		case 1:printf("2 and 7.\n");break;
		case 2:printf("3 and 8.\n");break;
		case 3:printf("4 and 9.\n");break;
		case 4:printf("5 and 0.\n");break;
		case 5:printf("1 and 6.\n");break;
		default:printf("Free\n");break;
	}break;
	case 2:switch(W){
		case 1:printf("1 and 6.\n");break;
		case 2:printf("2 and 7.\n");break;
		case 3:printf("3 and 8.\n");break;
		case 4:printf("4 and 9.\n");break;
		case 5:printf("5 and 0.\n");break;
		default:printf("Free\n");break;
	}break;
	case 3:switch(W){
		case 1:printf("5 and 0\n");break;
		case 2:printf("1 and 6\n");break;
		case 3:printf("2 and 7\n");break;
		case 4:printf("3 and 8\n");break;
		case 5:printf("4 and 9\n");break;
		default:printf("Free\n");break;
	}break;
	
}
return 0;
}
