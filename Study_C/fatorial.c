#include <stdio.h>

// Fatorial

main()
{
	int num, i, fat = 1;
	for (;;)
	{
		printf("\nDigite o numero: ");
		scanf("%d", &num);
		fat = 1;
		for (i = num; i >= 1; i--)
		{
			fat = fat * i;
		}
		printf("O fatorial de %d = %d\n", num, fat);
	}
}
