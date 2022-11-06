/* c5-2-8.c */
#include <stdio.h>
int main( )
{ 
 int ch,a=0,b=0,c=0,d=0;
ch=getchar(); // （1）
while(ch!='\n')
{ 
 if('a'<=ch&&ch<='z'||'A'<=ch&&ch<='Z')
	 a++;
 else if(ch==' ')
	 b++;
 else if('0'<=ch&&ch<='9')
	 c++;
 else d++;
 ch=getchar(); // （2）
}
printf("英文：%d\t空格：%d\t数字：%d\t其他：%d\n",a,b,c,d);
 return 0;
 }