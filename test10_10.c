/* c10-2-5.c */
#include <stdio.h>
/************found************/
int findmax( int s[],int n)
{
/************found************/
int j,p;
p=0;
 for (j=1;j<n;j++)
 { 
 if (s[j]>s[p]) p=j;
}
/************found************/
 return p; 
}
int main( )
{ 
int a[10],i,k;
 printf("����������Ԫ��:");
 for (i=0;i<10;i++)
 scanf("%d",&a[i]);
 k=findmax(a,10);
 printf("���Ԫ�������±�Ϊ��%d,���Ԫ��Ϊ%d\n",k,a[k]); 
 return 0;
}