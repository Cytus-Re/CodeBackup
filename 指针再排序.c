/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
void sort(int *, int, int (*)(int, int));
int input(int *, int );
int output(int *, int );
int up(int, int);       // a<b:1； a=b:0；a>b:-1反序
int down(int, int);     // a<b:-1；a=b:0；a>b:1 正序

int main()
{
	int n, flag, a[100];
	scanf("%d%d", &n, &flag);   // n：数组元素数量； flag=0：升序，flag=1：降序
	input(a, n);
	if ( flag==0 )
		sort(a, n, up);     // 0：升序，1：降序
	else
		sort(a, n, down);
	output(a, n);
	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
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
void sort(int *a, int n, int (*pf)(int, int))
{
	int m,i,j,t;

	for(i=0; i<n; i++) {
		m=i;
		for(j=i; j<n; j++) {
			if(pf==up) {
				if(a[j]<=a[m])m=j;
			} else {
				if(a[j]>=a[m])m=j;
			}
		}
		if(i!=m) {
			t=a[i];
			a[i]=a[m];
			a[m]=t;
		}
	}
}
int up(int a, int b){
	return 0;
}
int down(int a, int b){
	return 1;
}
