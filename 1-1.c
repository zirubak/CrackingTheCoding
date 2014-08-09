//Cracking the Coding Interview
//implement an algorithm to determine if a string has all unique characters.
//What if you can not use additional data structures.

#include <stdio.h>

typedef enum{false, true} bool;

bool in_unique_string(char str[])
{
	char ascii[256] = {}; //초기화

	if(str[0] == '\0')
	{
		printf("Error. Need to input string.\n");
		return false;
	}

	while(*str != '\0')
	{
		if(ascii[*str] == 0){
			ascii[*str] = 1;
			str++;
		}else{
			printf("String is not unique.\n");
			return false;
		}
	}

	printf("string is unique.\n");
	return true;
}


int main(void)
{
	bool result;
	result = in_unique_string("aabbccdd");
	printf("aabbccdd is %d\n", result);

	result = in_unique_string("abcd");
	printf("abcd is %d", result);
	return 0;
}




