/* c8-2-3.c */
#include <stdio.h>
int main( )
{ 
 int a[3][3]={1,2,3,4,5,6,9,8,7}, min[3],i,j;
for(i=0;i<=2;i++)
{ 
 /************found************/
 min[i]=a[i][0];
for ( j=1; j<=2; j++)
 /************found************/
 if(min[i]>a[i][j])
 min[i]=a[i][j];
}
 printf("���� a:\n");
for(i=0;i<=2;i++)
{ 
 for ( j=0; j<=2; j++)
 printf("%5d", a[i][j] );
printf("\n");
} 
printf("ÿ����Сֵ:\n");
 /************found************/
 for(i=0;i<=2;i++)
printf("%5d",min[i]);
printf("\n");
 return 0;
}