
/*
 * Exemplo de uma fila implementada sobre um vetor 
 * As passagens de parametros sao por referencia
 * Observem que a fila cresce até o tamanho do vetor, ou seja, ela tem o limite de TAMANHO
 * * Neste caso, a fila pode estar cheia e não ter nenhum elemento
 * */

#include <stdio.h>

#define tamanho 3

/* verifica se a fila esta cheia */
int cheia (int fim)
{
  if (fim == tamanho-1)
  {
    printf ("\nA fila (stack) esta cheia!!!\n");
    return 1;
  }
  return 0;
  
}


/* verifica se a fila esta vazia */
int vazia (int inicio, int fim)
{
  if (inicio > fim)
  {
    printf ("\nA fila (stack) esta vazia!!!\n");
    return 1;
   }
  return 0;
  
}


/* inserir um elemento */
int inserir(int *fila, int *fim, int e) 
{
  /* verificar se a fila esta cheia ==> evitar overflow*/
  if (cheia(*fim)){
    return 0; /* retorno zero ==> zero é falso */
  }
  (*fim)++; /* vou para a próxima posição livre; fim da fila */
  fila[*fim] = e;
  return 1; /* inserido com sucesso, retorno 1 ==> diferente de zero é verdadeiro */
  
}

// remover um elemento 
int remover(int *fila, int *fim, int *inicio)
{
  int e;
  // verificar se a fila esta vazia ==> evitar underflow
  if (vazia(*inicio, *fim)){
    return 0; // zero é falso 
  }
  e = fila[*inicio]; // guardo o elemento do inicio
  (*inicio)++; // removo o elemento do inicio, i.e., incremento o inicio 
  return e; // retorno diferente de zero é verdadeiro 

}


/* imprime os elementos da fila */
void imprime (int *fila, int fim, int inicio)
{
  int i=0;
  /* verificar se a fila nao esta vazia antes de tentar imprimir */
  if (!(vazia(inicio, fim))){
    for(i=inicio; i<=fim; i++){
      printf(" %i ",fila[i]);
    }
  }

}

/* funcao main*/
int main ()
{
  // Variaveis globais
  int fila[tamanho]; // definicao da fila
  int inicio = 0; // inicializa inicio com valor 0
  int fim = -1; // inicializa fim com valor -1 */

  int aux;
   
  printf ("\nInserir o 8");
  inserir(fila,&fim, 8);
  printf ("\nFila: ");
  imprime(fila, fim, inicio);
  printf ("\n");
  
  printf ("\nRemover");
  aux = remover(fila, &fim, &inicio);
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia 
    printf("\nValor removido: %i", aux);
    printf("\nFila: ");
    imprime(fila, fim, inicio);
  }
  printf ("\n");
  
  printf ("\nRemover");
  aux = remover(fila, &fim, &inicio);
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia 
    printf("\nValor removido: %i", aux);
    printf("\nFila: ");
    imprime(fila, fim, inicio);
  }
  printf ("\n");
 
  printf ("\nInserir o 4");
  inserir(fila, &fim, 4);
  printf ("\nFila: ");
  imprime(fila, fim, inicio);
  printf ("\n");
  
  printf ("\nInserir o 12");
  inserir(fila, &fim, 12);
  printf ("\nFila: ");
  imprime(fila, fim, inicio);
  printf ("\n");
  
  printf ("\nInserir o 13");
  inserir(fila, &fim, 13);
  printf ("\nFila: ");
  imprime(fila, fim, inicio);
  printf ("\n");

  printf ("\nInserir o 7");
  inserir(fila, &fim, 7);
  printf ("\nFila: ");
  imprime(fila, fim, inicio);
  printf ("\n");
  
  return 0;
}