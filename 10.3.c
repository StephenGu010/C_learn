/* c3-2-5.c */
#include <stdio.h>
int main()
{ 
  char c1,c2;//定义需要的变量（注意类型）;
  c1=getchar();//用 getchar 函数从键盘读入 c1;
  c2=getchar();//用 getchar 函数从键盘读入 c2;
  //用 putchar 函数输出变量 c1,c2;
  printf("%d,%d",c1,c2);//用 printf 函数输出变量 c1,c2;
  return 0;
}