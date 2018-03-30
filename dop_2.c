/*Перевод десятичного числа в двоичное*/

#include <stdio.h>

int main(void)
{
	void bin(unsigned long);
	unsigned long number_to_convert;

	printf("Number to be converted?\n");
	scanf("%lu",&number_to_convert);
	printf("Converted number = ");
	bin(number_to_convert);
	putchar('\n');
	return 0;
}

void bin(unsigned long number_to_convert)
{
	int converted_number;
	converted_number = number_to_convert % 2;
	if(number_to_convert >= 2)
		bin(number_to_convert / 2);
	putchar(converted_number == 0 ? '0' : '1');
}