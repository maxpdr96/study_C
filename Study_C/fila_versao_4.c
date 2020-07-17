
/*
 * Exemplo de uma fila CIRCULAR implementada sobre um vetor
 * * Nas passagens de parametros sao utilizadas variaveis globais
 * Observem que a fila cresce até o TAMANHO do vetor, ou seja, ela tem o limite de TAMANHO */

#include <stdio.h>

#define TAMANHO 3

// Variaveis globais
int fila[TAMANHO]; // definicao da fila
int inicio = 0; // inicializado com o último índice do vetor
int fim = 0; // inicializado com o último índice do vetor
int elementos = 0; // guarda a quantidade de elementos na fila


/* inserir um elemento */
void inserir(int e) // só passo o valor a ser inserido
{

  if ( elementos == TAMANHO )
  {
    printf ("Fila cheia\n");
    return;
  }
  fila[fim] = e;
  fim = (fim + 1 ) % TAMANHO; // calculo o novo fim
  elementos++; // incremento a quantidade de elementos na fila

} /* fim inserir */

// remover um elemento
int remover()
{
  int e;

  if (elementos == 0)
  {
    printf("Vazia\n");
    return 0;
  }
  e = fila[inicio];
  inicio = (inicio +1 ) % TAMANHO ; // calculo o novo inicio
  elementos--; // decremento a quantidade de elementos na fila

  return e;

} /* fim remove */

// imprime os elementos da fila
// REFAZER PARA FILA CIRCULAR
void imprime ()
{
  int i=0;
  /* verificar se a fila nao esta vazia antes de tentar imprimir */
    for(i=inicio; i<=fim; i++)
      printf(" %i ",fila[i]);

}

/* funcao main*/
int main ()
{
  int aux;

  printf ("\nInserir o 8");
  inserir(8);
  printf ("\n");

  printf ("\nRemover");
  aux = remover();
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia
    printf("\nValor removido: %i", aux);
  }
  printf ("\n");

  printf ("\nInserir o 4");
  inserir(4);

  printf ("\nInserir o 12");
  inserir(12);

  printf ("\nInserir o 13");
  inserir(13);

  printf ("\nInserir o 7");
  inserir(7);

  printf ("\nRemover");
  aux = remover();
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia
    printf("\nValor removido: %i", aux);
  }

  printf ("\nRemover");
  aux = remover();
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia
    printf("\nValor removido: %i", aux);
  }

  printf ("\nRemover");
  aux = remover();
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia
    printf("\nValor removido: %i", aux);
  }

  return 0;
}
