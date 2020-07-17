#include <stdio.h>

// Ferifica se a matriz é triangular ou não

main()
{
	float a11, a12, a21, a22, det;
	printf("\n digite a11:");
	scanf("%f", &a11);
	printf("\n digite a12:");
	scanf("%f", &a12);
	printf("\n digite a21");
	scanf("%f", &a21);
	printf("\n digite a22");
	scanf("%f", &a22);
	det = ((a11 * a22) - (a12 * a21));
	printf("\n determinante:%f", det);
	if (det == (a11 * a22))
		printf("\n eh uma matriz triangular");
	else
		printf("\n nao eh uma matriz triangular");
	getchar();
	getchar();
}
