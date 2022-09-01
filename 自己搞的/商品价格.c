#include <stdio.h>
int main()
{int choice;double price;
printf("[1]select crips\n");
printf("[2]select popcorn\n");
printf("[3]select chocolate\n");
printf("[4]select cola\n");
printf("[0]exit\n");
printf("enter choice\n");
scanf("%d",&choice);
switch(choice)
{case 1:price=3;break;
case 2:price=2.5;break;
case 3:price=4;break;
case 4:price=3.5;break;
default:price=0;
} 
printf("%.2lf\n",price);
return 0;}
