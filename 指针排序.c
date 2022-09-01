/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
void sort(int *, int, int);
int input(int *, int );
int output(int *, int );
int main()
{
	// 输入n（n<100)个整数，按照指定的方式（升序或降序）进行排序
	int n, flag, a[100];
	scanf("%d%d", &n, &flag);
	input(a, n);
	sort(a, n, flag); // flag=0：升序，flag=1：降序
	output(a, n);
	return 0;
}
int input(int *a,int n)
{
	int i;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	return 0;
}
int output(int *a,int n)
{
	int i;
	for(i=0; i<n; i++) {
		printf("%d,",a[i]);
	}
	printf("\n");
	return 0;
}
void sort(int *a,int n,int flag)
{
	int i,j,t,m;
	for(i=0; i<n; i++) {
		m=i;
		for(j=i; j<n; j++) {
			if(flag) {
				if(a[j]>=a[m])m=j;
			} else {
				if(a[j]<=a[m])m=j;
			}
		}
		t=a[i];
		a[i]=a[m];
		a[m]=t;
	}

}
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
