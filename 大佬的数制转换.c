
#include <stdio.h>  
#include <math.h>  
int main()  
{  
    char a[100],b[100];  
    char c;  
    int m=0,n=0,p,q,s=0,t=0,i,k,e,f,u=1,v=1;  
    int x[100],y[100];  
    scanf("%s %s",a,b);  
    while(a[m]!='\0')  
    m++;  
    while(b[n]!='\0')  
    n++;   
    for(i=0;i<=m-1;i++)  
    {  
        switch(a[i])  
    {  
        case('0'):x[i]=0;break;case('1'):x[i]=1;break;case('2'):x[i]=2;break;case('3'):x[i]=3;break;  
        case('4'):x[i]=4;break;case('5'):x[i]=5;break;case('6'):x[i]=6;break;case('7'):x[i]=7;break;  
        case('8'):x[i]=8;break;case('9'):x[i]=9;break;case('A'):x[i]=10;break;case('B'):x[i]=11;break;  
        case('C'):x[i]=12;break;case('D'):x[i]=13;break;case('E'):x[i]=14;break;case('F'):x[i]=15;break;  
        case('G'):x[i]=16;break;case('H'):x[i]=17;break;case('I'):x[i]=18;break;case('J'):x[i]=19;break;  
        case('K'):x[i]=20;break;case('L'):x[i]=21;break;case('M'):x[i]=22;break;case('N'):x[i]=23;break;  
        case('O'):x[i]=24;break;case('P'):x[i]=25;break;case('Q'):x[i]=26;break;case('R'):x[i]=27;break;  
        case('S'):x[i]=28;break;case('T'):x[i]=29;break;case('U'):x[i]=30;break;case('V'):x[i]=31;break;  
        case('W'):x[i]=32;break;case('X'):x[i]=33;break;case('Y'):x[i]=34;break;case('Z'):x[i]=35;break;  
          
    }  
    }  
    for(k=0;k<=n-1;k++)  
    {  
        switch(b[k])  
    {  
        case('0'):y[k]=0;break;case('1'):y[k]=1;break;case('2'):y[k]=2;break;case('3'):y[k]=3;break;  
        case('4'):y[k]=4;break;case('5'):y[k]=5;break;case('6'):y[k]=6;break;case('7'):y[k]=7;break;  
        case('8'):y[k]=8;break;case('9'):y[k]=9;break;case('A'):y[k]=10;break;case('B'):y[k]=11;break;  
        case('C'):y[k]=12;break;case('D'):y[k]=13;break;case('E'):y[k]=14;break;case('F'):y[k]=15;break;  
        case('G'):y[k]=16;break;case('H'):y[k]=17;break;case('I'):y[k]=18;break;case('J'):y[k]=19;break;  
        case('K'):y[k]=20;break;case('L'):y[k]=21;break;case('M'):y[k]=22;break;case('N'):y[k]=23;break;  
        case('O'):y[k]=24;break;case('P'):y[k]=25;break;case('Q'):y[k]=26;break;case('R'):y[k]=27;break;  
        case('S'):y[k]=28;break;case('T'):y[k]=29;break;case('U'):y[k]=30;break;case('V'):y[k]=31;break;  
        case('W'):y[k]=32;break;case('X'):y[k]=33;break;case('Y'):y[k]=34;break;case('Z'):y[k]=35;break;  
    }  
    }  
    p=x[0],q=y[0];  
    for(i=1;i<=m-1;i++)  
    {  
        if(x[i]>p) p=x[i];  
    }  
    for(k=1;k<=n-1;k++)  
    {  
        if(y[k]>q) q=y[k];  
    }  
    for(i=p+1;i<=36;i++)  
    {  
        for(e=0;e<=m-1;e++)  
        {  
            u=pow(i,m-e-1);  
            s=s+x[e]*u;  
        }  
        {  
            for(k=q+1;k<=36;k++)  
        {  
            for(f=0;f<=n-1;f++)  
        {  
            v=pow(k,n-f-1);  
            t=t+y[f]*v;  
        }  
        if(s==t) break;         // printf("%d %d\n", k, t);  
        t=0;  
        }  
        }  
        if(s==t) break;               //  printf("%d %d\n", i, s);  
        s=0;  
    }  
    if(s!=t||(s==0&&t==0)) printf("%s is not equal to %s in any base 2..36\n",a,b);  
    else printf("%s (base %d) = %s (base %d)\n",a,i,b,k);  
    return 0;  
 }

