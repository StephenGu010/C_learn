/* c5-2-4 .c */
#include <stdio.h>
int main( )
{
 float x,amax,amin;
printf("������ɼ������� 0 ʱ������:\n");
scanf("%f",&x);
 /***********found***********/
 amax=0;amin=100;
 /***********found***********/
 for (;x!=0;)
{ 
 if (x>amax) amax=x;
 /***********found***********/
if ( x<amin) amin=x;
scanf("%f",&x);
}
printf("\namax=%f\namin=%f\n",amax,amin);
 return 0;
}