/* c8-1-1.c*/
#include <stdio.h>
#define M 3
#define N 5
int main( )
{ 
char a[M][N]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
 int i,j;
printf("����ѭ�����ÿ������Ԫ�ص�ֵ:\n");
for(i=0;i<M;i++)
{ for(j=0;j<N;j++)
printf("%5c",a[i][j]);
 printf("\n");
}
printf("\n ����ѭ����ʮ���������ÿ������Ԫ�صĵ�ַ:\n");
for(i=0;i<M;i++)
{ for(j=0;j<N;j++)
printf("%10x",&a[i][j]);
 printf("\n");
}
printf("\n �������������� a ռ�Ĵ洢�ռ��С:\n");
 printf("%5d",sizeof(a));
printf("\n");
return 0;
}