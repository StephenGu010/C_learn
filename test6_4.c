/* c6-2-1.c */
#include <stdio.h>
int main( )
{ 
int i,j,k;
/************found************/
for(i=0;i<=3;i++)
 { 
for( j=0;j<=10-2*i;j++ ) printf(" ");
 /************found************/
for( k=0;k<=i*4;k++ ) printf("*");
printf("\n"); 
}
return 0;
}