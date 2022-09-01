#include <stdio.h>
int main()
{
int x,R,S;
char *z,*y; 
scanf("%d",&x);
R=x/10;
S=x%10;
switch (R)
{
case 1:z="unreadable";break;
case 2:z="barely readable, occasional words distinguishable";break;
case 3:z="readable with considerable difficulty";break;
case 4:z="readable with practically no difficulty";break;
case 5:z="perfectly readable";break;
}
switch (S)
{
case 1:y="Faint signals, barely perceptible";break;
case 2:y="Very weak signals";break;
case 3:y="Weak signals";break;
case 4:y="Fair signals";break;
case 5:y="Fairly good signals";break;
case 6:y="Good signals";break;
case 7:y="Moderately strong signals";break;
case 8:y="Strong signals";break;
case 9:y="Extremely strong signals";break; 
}
printf("%s, %s.\n",y,z);
return 0;
} 
