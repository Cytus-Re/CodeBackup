#include <stdio.h>
int main()
{int a,o=0,e=0;
 scanf("%d",&a);
 while(a!=-1)
 {
 a%2==0?e++:o++;
 scanf("%d",&a);
 }
printf("%d %d",o,e);
return 0;
}
