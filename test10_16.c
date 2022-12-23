#include <stdio.h>
void fun(char str1[]);
char str1[80] = "123456789";
int main()
{
	
	fun(str1);

	return 0;
}
void fun(char str1[])
{
	int i;
	char str2[80];
	for (i = 0; str1[i] != '\0'; i++)
	{
		str2[i] = str1[2 * i];

	}
	for (i = 0; str2[i] != '\0'; i++)
	{
		printf("%c",str2[i]);
	}
}