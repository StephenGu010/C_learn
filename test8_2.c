/* c8-1-2.c */
#include <stdio.h>
int main( )
{ 
int i,j;
int a[3][3]={10,20,30,40,50,60};
 printf("输出数组 a 中所有元素的值:\n");
 for(i=0;i<3;i++){
	 for(j=0;j<3;j++){
		 printf("%d\t",a[i][j]);
	 
	 }
 printf("\n");
 }
return 0;
}