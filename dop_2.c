/*Перевод из десятичной в двоичную*/

#include <stdio.h>

int main(void)
{
	int des, ost, n = 1 ,i = 0;
	int stroke[n];

	printf("decimal number: ");
	scanf("%i", &des);
	while(des != 0)
	{
		ost = des % 2;
		stroke[i] = ost;
		des = (des - ost) / 2;
		ost = 0;
		i++;
		n++;
	}
	printf("binary equivalent: ");
	for(int i = n - 2; i >= 0 ; i--)
	{
		printf("%i", stroke[i]);
	}
	printf("\n");
}