/*Перевод из десятичной в двоичную*/

#include <stdio.h>

int main(void)
{
	int dec, ost, n = 1 ,i = 0;
	char stroke[n];

	printf("decimal number: ");
	scanf("%i", &dec);
	while(dec != 0)
	{
		ost = dec % 2;
		if(ost == 0)
			stroke[i] = '0';
		else
			stroke[i] = '1';
		dec = (dec - ost) / 2;
		n++;
		i++;
	}
	n++;
	stroke[n - 1] = '\0';
	printf("binary equivalent: ");
	for(int i = n - 3; i >= 0 ; i--)
	{
		printf("%c", stroke[i]);
	}
	printf("\n");
}