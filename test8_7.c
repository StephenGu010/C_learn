/* c8-2-4.c */
#include <stdio.h>
int main( )
{ 
/************found************/
int a[][3]={1,2,3,4,5,6,7,8,9}, i,j,t;
 printf("¾ØÕó a:\n");
for(i=0;i<=2;i++)
{ 
for ( j=0; j<=2; j++)
 printf("%5d", a[i][j] );
printf("\n");
}
for(i=0;i<3;i++)
/************found************/
for(j=0;j<i;j++)
{
t=a[i][j];
/************found************/
a[i][j] = a[j][i];
a[j][i]=t;
}
 printf("×ªÖÃºó¾ØÕó:\n");
for(i=0;i<=2;i++)
{ 
for ( j=0; j<=2; j++)
 printf("%5d", a[i][j] );
printf("\n");
} 
 return 0;
}