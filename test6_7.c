/* c6-2-3.c */
#include <stdio.h>
#include <math.h>
int main()
{ 
float i,j,k;
printf("\t Îå½Ç\t ¶þ½Ç\t Ò»½Ç\n");
/************found************/
for(i=0;i<=2;i++) 
for(j=0;j<=5;j++)
 for(k=0;k<=10;k++)
 {
 /************found************/
if(i*0.5+j*0.2+k*0.1 == 1.0 ) 
printf("\t%.0f\t%.0f\t%.0f\n",i,j,k);
 }
return 0;
}