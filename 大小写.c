#include <stdio.h>
int main()
{char a;
int b;
scanf("%c",&a);
a<'A'||a>'z'?printf("%c\n",a):(a>='A'&&a<='Z'?printf("%c\n",a+32):printf("%c\n",a-32));
return 0;
}
