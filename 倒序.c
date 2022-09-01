#include <stdio.h>
int main()
{int x;
scanf("%d",&x);
printf("%d%d%d\n",x%10,x/10%10,x/100);
return 0;
}
