/*Поиск простых чисел до 150*/

#include <stdio.h>

int main(void)
{
	int P[150];
	for(int i = 0, j = 2; i < 149; ++i, ++j)
	{
		P[i] = j;
		if(j % 2 == 0 && j != 0)
			j = 0;
		printf("%3i\n", j);
	}

	return 0;
}
