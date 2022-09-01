#include <stdio.h>
#include<string.h>
int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	int n,i;
	n=B-A;
	int a[50],b[50],result[50]={0},carry=0,len=0;
	for(i=0;i<50;i++){
		a[i]=0;
		b[i]=-1;
		result[i]=0;
	}
	a[0]=0;
	b[0]=1;
	//printf("b=%d\n",b[0]);
	for(i=1;i<=n;i++){
		int l,lenb=0,v;
		for(v=0;v<len;v++){
			result[v]=0;
		}
		len=0;
		for(l=0;b[l]!=-1;l++){
			len++;
			//printf("b[%d]=%d,len=%d\n",l,b[l],len);
		}
		lenb=len;
		int t;
		
		for(t=0; t<len; t++) {
				result[t]+=(a[t]+b[t]);//printf("%d=%d+%d\n",result[t],a[t],b[t]);//printf("b=%d\n",b[0]);
				carry=(result[t])/10;
				result[t]%=10;
				result[t+1]+=carry;
				carry=0;
				//printf("r=%d,c=%d,r+1=%d,i=%d\n",result[t],carry,result[t+1],t);
			}
			//int o=0;
			//for(o=0;o<len;o++){
			//	printf("%d",result[o++]);
			//}
			
			if(result[len]>0) {
				len++;
			}
			int j,k;
			for(j=0;j<lenb;j++){
				a[j]=b[j];
			}
			for(k=0;k<len;k++){
				b[k]=result[k];
			//	result[k]=0;
			}
			
			//int o=0;printf("%d\n",result[o++]);
	}
	int m,ent=0;
	for(m=len-1;m>=0;m--){
			if(result[m]==0&&ent==0) {
				continue;
			}
		printf("%d",result[m]);
		ent=1;
	}
	printf("\n");
	return 0;
}
