
#include <stdio.h>

#define tamanho 2

// Variaveis globais
int pilha[tamanho]; // definicao da pilha
int topo = -1; // inicializacao da varariavel topo com valor -1 */


/* empilha um elemento */
void push(int e) // só passo o valor a ser inserido
{
  /* verificar se a pilha esta cheia ==> evitar overflow*/
  if (topo>=tamanho-1){
    printf("\nPilha cheia");
    return; /* retorn para encerrar a funcao */
  }
  pilha[++topo] = e;
  
}

/* desempilha um elemento */
int pop()
{
  /* verificar se a pilha esta vazia ==> evitar underflow*/
  if (topo<0){
    printf("\nPilha vazia");
    return 0; /* retorna zero para indicar que nao houve sucesso */
  }
  return pilha[topo--]; //* desempilhado com sucesso, retorno diferente de zero é verdadeiro */

}


/* imprime os elementos da pilha */
void imprime ()
{
  int i=0;
  for(i=0; i<=topo; i++){
    printf(" %i ",pilha[i]);
  }
}

/* funcao main*/
int main ()
{
  int aux;
  
  printf ("\nDesempilhar");
  aux = pop();
  if(aux != 0){ // verifico se realmente desempilhei, pois a pilha pode estar vazia 
    printf("\nValor desempilhado: %i", aux);
    printf("\nPilha: ");
    imprime();
  }
  printf ("\n");
  
  printf ("\nEmpilhar o 8");
  push( 8 );
  printf ("\nPilha: ");
  imprime( );
  printf ("\n");
  
  printf ("\nEmpilhar o 4");
  push( 4 );
  printf ("\nPilha: ");
  imprime( );
  printf ("\n");
  
  printf ("\nEmpilhar o 12");
  push( 12 );
  printf ("\nPilha: ");
  imprime( );
  printf ("\n");
  
  printf ("\nDesempilhar");
  aux = pop( );
  if(aux != 0){ // verifico se realmente desempilhei, pois a pilha pode estar vazia 
    printf("\nValor desempilhado: %i", aux);
    printf("\nPilha: ");
    imprime( );
  }
  printf ("\n");
  
  printf ("\nEmpilhar o 13");
  push( 13 );
  printf ("\nPilha: ");
  imprime( );
  printf ("\n");
  
  return 0;
}