/* c10-2-1.c */
#include <stdio.h>
/************found************/
int fac(int n) /*������׳˺��� jf*/
{ 
int i;
int t=1;
for(i=1; i<=n; i++)
t =t*i;
/************found************/
return t;;
}
int main( )
{ 
int m,n,t,cmn;
 printf("please enter m and n: ");
 scanf("%d%d", &m, &n );
 if(m<n)
 { t=m;m=n;n=t; }
 if(m<0||n<0) 
{ printf("input error!"); return 0; }
/************found************/
 cmn=fac(m)/(fac(n)*fac(m-n)); /*���� fac()����*/
 printf("C(%d,%d)=%d\n",m,n,cmn) ; 
 return 0; 
}