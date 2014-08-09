//1-2 write code to reverse c-style string

#include <stdio.h>
#include <stdlib.h>

void reverse(char *str)
{
	char *end = str;
	char tmp;

	if(str)
	{
		while(*end)
		{
			++end; // total string 갯수 구하는 거
		}
		--end; // null을 빼는 거
		while(str < end)
		{
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}
}

int main(void)
{
	char str[] = "abc";
	reverse(str);
	printf("reverse: %s", str);

	return 0;
}
