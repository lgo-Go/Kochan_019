/*Считает факториалы чисел от 1 до 10*/

#include<stdio.h>

int main(void)
{
	int fak = 1;

	for(int x = 1; x <= 10; x++)
	{
		fak*= x;
		printf("%2i! = %i\n", x, fak);
	}
	
	return 0;
}