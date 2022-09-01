
#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c,d,i,j,k,e=0,f=0,n,x=0,y=0,z=0;
 int p[20],q[20],o[20];
 scanf("%d",&n);
 a=pow(2,n+2);
 for(i=1;i<=a;i++)
 {
  for(j=1;j<=a;j++)
  {
   b=1,c=1,d=a;
   for(k=n+1;k>=1;k--)
   {
    if(i==b&&j==c) {o[x]=b,p[x]=c;x++;}
    if(i==b&&j==d) {o[y]=b,q[y]=d;y++;}
    b=b+pow(2,k),c=c+pow(2,k-1),d=a+1-c;
   }
  }
 }
 for(i=1;i<=a;i++)
 {
  for(j=1;j<=a;j++)
  {
   for(k=0;k<=n;k++)
   {
    if((i==o[k]&&j==p[k])||(i==o[k]&&j==q[k])||(i==a&&(j==p[k]||j==q[k]))) z=1;
    if(z==1) break;
       if((i==a&&j!=p[k]&&j!=q[k])||(i==o[k]&&(p[k]<j&&j<q[k]))) z=2;
       if((j==p[k]||j==q[k])&&(o[k]<i&&i<a)) z=3;
       if(i+j==(o[k]+1+a/2)&&i>=o[k]+2&&j>=p[k]+2) z=4,e=i,f=a+1-j;
       if(i==e&&j==f) z=5;
   }
//   for(k=0;k<n;k++)
//   {
//    if(i+j==(o[k]+1+a/2)&&i>=o[k]+2&&j>=p[k]+2) z=4,e=i,f=a+1-j;
//   }
//  if(i==e&&j==f) z=5;
   if(z==0) printf(" ");
      if(z==1) printf("+");
      if(z==2) printf("-");
      if(z==3) printf("|");
      if(z==4) printf("/");
      if(z==5) printf("\\");
   z=0;
   
  }
  printf("\n");
 }
 return 0;
 }
