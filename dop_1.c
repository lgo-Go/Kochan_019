/*Бинарный поиск символа в строке*/

#include "stdio.h"

int main(void)
{
	char stroke[] = "is there a character in this line:\0";
	char ch;
	int x = 0;

	printf("is there a character in this line: ");
	scanf("%c", &ch);
	for(int i = 0;  i <= 33; ++i)
	{
		if(stroke[i] == ch)
			++x;
	}
	if(x > 0)
		printf("yes, %i\n", x);
	else
		printf("no\n");
	return 0;
}