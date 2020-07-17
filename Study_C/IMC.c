#include <stdio.h>

// Calcula IMC

main()
{
   int peso;
   float altura, imc;

   printf("Informe o peso(kg): ");
   scanf("%d", &peso);

   printf("\nInforme a altura(M): ");
   scanf("%f", &altura);

   imc = peso / (altura * altura);

   printf("\n\nIMC = peso / (altura * altura)");
   printf("\n\nIMC calculado   Situacao");
   printf("\n------------------------------");
   printf("\nMenos de 20     Abaixo do peso");
   printf("\nDe 20 a  25     Peso Normal");
   printf("\nDe 25 a  30     Acima do peso");
   printf("\nDe 30 a  34     Obeso");
   printf("\nAcima de 34     Muito Obeso");
   printf("\n------------------------------");
   printf("\nIMC = %.2f", imc);
   if (imc < 20)
      printf(" (abaixo do peso).");
   else if ((imc >= 20) && (imc < 25))
      printf(" (peso normal).");
   else if ((imc >= 25) && (imc < 30))
      printf(" (acima do peso).");
   else if ((imc >= 30) && (imc < 34))
      printf(" (obeso).");
   else
      printf(" (muito obeso).");
   getchar();
   getchar();
}
