#include <stdio.h>
//int main(){
	int x, y, z, w;
void p(int *y, int x)
{
    static int w;
    *y++; x++; w = x+*--y;
    printf("%d#%d#%d#%d#",x,*y,z,w);
}
int main(void)
{
    int x, y, z, w;
    x=y=z=w=1;
    do{
        static int x;
        p(&x, y);
        printf("%d#%d#%d#%d#",x,y,z,w);
    } while(0);
    return 0;
}
