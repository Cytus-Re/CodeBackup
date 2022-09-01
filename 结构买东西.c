/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */
#include <stdio.h>

typedef struct buy {
	char  gname;
	int   sname;
	int   gprice;
} BUY;

int main( )
{
	int i, j, n;
	int min, price[10][3];
	int findm( int n, int price[][3], BUY scheme[] );

	static BUY scheme[3]= { {'A', 0, 0}, {'B', 0, 0}, {'C', 0, 0} };

	scanf( "%d", &n );
	for( i = 0; i < n; i++ )
		for( j = 0; j < 3; j++ )
			scanf( "%d", &price[i][j] );

	min = findm( n, price, scheme );

	printf("Total Money are : %d\nGoods-Name  Shop-Name  Goods-Price\n", min );
	for ( i=0; i < 3; i++ )
		printf("         %c:%10d%13d\n", scheme[i].gname, scheme[i].sname, scheme[i].gprice );
	return 0;
}

int findm( int n, int gp[ ][3], BUY schm[ ] )
{
	int i=0,j=0,m=999,ret=0;
	//printf("%d\n",gp[0][0]);
	for(j=0; j<3; j++) {
		m=999;
		for(i=0; i<n; i++) {
			//printf("price=%d name=%d,min=%d\n",gp[i][j],i+1,m);
			if(gp[i][j]<m) {

				if(schm[j-1].sname!=i+1&&schm[j-2].sname!=i+1) {
					m=gp[i][j];
					schm[j].sname=i+1;
					schm[j].gprice=m;
				}
			}
		}
	}
	ret=schm[0].gprice+schm[1].gprice+schm[2].gprice;
	return ret;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
