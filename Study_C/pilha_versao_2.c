
#include <stdio.h>

#define tamanho 2

// Variaveis globais
int pilha[tamanho]; // definicao da pilha
int topo = -1; // inicializacao da varariavel topo com valor -1 */

/* verifica se a pilha esta cheia */
int cheia ()
{
  if (topo == (tamanho-1))
  {
    printf ("\nA pilha (stack) esta cheia!!!\n");
    return 1;
   }
   else {
     return 0;
   }
}


/* verifica se a pilha esta vazia */
int vazia ()
{
  if (topo == -1)
  {
    printf ("\nA pilha (stack) esta vazia!!!\n");
    return 1;
   }
   else {
     return 0;
   }
}


/* empilha um elemento */
int push(int e) // só passo o valor a ser inserido
{
  /* verificar se a pilha esta cheia ==> evitar overflow*/
  if (cheia()){
    return 0; /* retorno zero ==> zero é falso */
  }
  else{
    topo++; /* vou para a próxima posição livre */
    pilha[topo] = e;
    return 1; /* empilhado com sucesso, retorno 1 ==> diferente de zero é verdadeiro */
  }
  
}

/* desempilha um elemento */
int pop()
{
  int e;
  /* verificar se a pilha esta vazia ==> evitar underflow*/
  if (vazia(topo)){
    return 0; /* zero é falso */
  }
  else{ 
    e = pilha[topo]; /* guardo o elemento do topo*/
    topo--; /* removo o elemento do topo, i.e., decremento o topo */
    return e; //* desempilhado com sucesso, retorno diferente de zero é verdadeiro */
    /* dará um problema se a pilha aceitar o elemento zero*/
  }

}

/* devolve o elemento do topo, mas não remove */
int elemento_topo ()
{
  int e;
  /* verificar se a pilha esta vazia ==> evitar underflow*/
  if (vazia()){
    return 0; /* zero é falso */
  }
  else{ 
    e = pilha[topo]; /* guardo o elemento do topo*/
    return e; //* retorna o elemento */
    /* dará um problema se a pilha aceitar o elemento zero*/
  }
}

/* imprime os elementos da pilha */
void imprime ()
{
  int i=0;
  /* verificar se a pilha nao esta vazia antes de tentar imprimir */
  if (!(vazia(topo))){
    for(i=0; i<=topo; i++){
      printf(" %i ",pilha[i]);
    }
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
  
  printf ("\nDesmpilhar");
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
  
  printf("\n\n\n");
  return 0;
}