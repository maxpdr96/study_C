
/*
 * Exemplo de uma fila implementada sobre um vetor
 * * Nas passagens de parametros sao utilizadas variaveis globais
 * Observem que a fila cresce até o tamanho do vetor, ou seja, ela tem o limite de TAMANHO
 * O inicio da fila sempre he a posicao zero
 * Toda vez que um elemento he removido, todos os elementos sao deslocados
 * MUITO CARO ESSA OPERACAO!!! NAO COMPENSA NA PRATICA
 * */

#include <stdio.h>

#define tamanho 3

// Variaveis globais
int fila[tamanho]; // definicao da fila
int fim = -1; // inicializa fim com valor -1 */

/* verifica se a fila esta cheia */
int cheia ()
{
  if (fim == (tamanho-1))
  {
    printf ("\nA fila (stack) esta cheia!!!\n");
    return 1;
  }
  return 0;
  
}


/* verifica se a fila esta vazia */
int vazia ()
{
  if (fim == -1)
  {
    printf ("\nA fila (stack) esta vazia!!!\n");
    return 1;
   }
  return 0;
  
}


/* inserir um elemento */
int inserir(int e) // só passo o valor a ser inserido
{
  /* verificar se a fila esta cheia ==> evitar overflow*/
  if (cheia()){
    return 0; /* retorno zero ==> zero é falso */
  }
  fim++; /* vou para a próxima posição livre; fim da fila */
  fila[fim] = e;
  
  return 1; /* inserido com sucesso, retorno 1 ==> diferente de zero é verdadeiro */
  
}

// remover um elemento 
int remover()
{
  int e, i;
  // verificar se a fila esta vazia ==> evitar underflow
  if (vazia()){
    return 0; // zero é falso 
  }
  e = fila[0]; // guardo o elemento do inicio
  // descolo todos os elementos --- MUITO CARO ESSA OPERACAO
  for (i = 0; i < fim; i++)
      fila[i] = fila[i+1];
  fim--; // fim é decrementado
  
  return e; // retorno diferente de zero é verdadeiro 

}


/* imprime os elementos da fila */
void imprime ()
{
  int i=0;
  /* verificar se a fila nao esta vazia antes de tentar imprimir */
  if (!(vazia())){
    for(i=0; i<=fim; i++){
      printf(" %i ",fila[i]);
    }
  }

}

/* funcao main*/
int main ()
{
  int aux;
   
  printf ("\nInserir o 8");
  inserir(8);
  printf ("\nFila: ");
  imprime();
  printf ("\n");
  
  printf ("\nRemover");
  aux = remover();
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia 
    printf("\nValor removido: %i", aux);
    printf("\nFila: ");
    imprime();
  }
  printf ("\n");
  
  printf ("\nRemover");
  aux = remover();
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia 
    printf("\nValor removido: %i", aux);
    printf("\nFila: ");
    imprime();
  }
  printf ("\n");
 
  printf ("\nInserir o 4");
  inserir(4);
  printf ("\nFila: ");
  imprime();
  printf ("\n");
  
  printf ("\nInserir o 12");
  inserir(12);
  printf ("\nFila: ");
  imprime();
  printf ("\n");
  
  printf ("\nInserir o 13");
  inserir(13);
  printf ("\nFila: ");
  imprime();
  printf ("\n");

  printf ("\nInserir o 7");
  inserir(7);
  printf ("\nFila: ");
  imprime();
  printf ("\n");
  
  printf ("\nRemover");
  aux = remover();
  if(aux != 0){ // verifico se realmente removi, pois a fila pode estar vazia 
    printf("\nValor removido: %i", aux);
    printf("\nFila: ");
    imprime();
  }
  printf ("\n");
  
  printf ("\nInserir o 15");
  inserir(15);
  printf ("\nFila: ");
  imprime();
  printf ("\n");
  
  return 0;
}