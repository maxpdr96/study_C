
#include <stdio.h>

#define tamanho 2

/* verifica se a pilha esta cheia */
int cheia (int topo)
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
int vazia (int topo)
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
//int push(int p[], int e, int *topo)
int push(int *p, int e, int *topo)
{
  /* verificar se a pilha esta cheia ==> evitar overflow*/
  if (cheia(*topo)){
    return 0; /* retorno zero ==> zero é falso */
  }
  else{
    (*topo)++; /* vou para a próxima posição livre */
    p[*topo] = e;
    return 1; /* empilhado com sucesso, retorno 1 ==> diferente de zero é verdadeiro */
  }
  
}

/* desempilha um elemento */
int pop (int *p, int *topo)
{
  int e;
  /* verificar se a pilha esta vazia ==> evitar underflow*/
  if (vazia(*topo)){
    return 0; /* zero é falso */
  }
  else{ 
    e = p[*topo]; /* guardo o elemento do topo*/
    (*topo)--; /* removo o elemento do topo, i.e., decremento o topo */
    return e; //* desempilhado com sucesso, retorno diferente de zero é verdadeiro */
    /* dará um problema se a pilha aceitar o elemento zero*/
  }

}

/* devolve o elemento do topo, mas não remove */
int elemento_topo (int *p, int *topo)
{
  int e;
  /* verificar se a pilha esta vazia ==> evitar underflow*/
  if (vazia(*topo)){
    return 0; /* zero é falso */
  }
  else{ 
    e = p[*topo]; /* guardo o elemento do topo*/
    return e; //* retorna o elemento */
    /* dará um problema se a pilha aceitar o elemento zero*/
  }
}

/* imprime os elementos da pilha */
void imprime (int *p, int *topo)
{
  int i=0;
  /* verificar se a pilha nao esta vazia antes de tentar imprimir */
  if (!(vazia(*topo))){
    for(i=0; i<=*topo; i++){
      printf(" %i ",p[i]);
    }
  }

}

/* funcao main*/
int main ()
{
  int pilha[tamanho];
  int topo = -1; /* topo inicializa com -1 */
  int aux;
  
  printf ("\nDesempilhar");
  aux = pop(pilha, &topo);
  if(aux != 0){ // verifico se realmente desempilhei, pois a pilha pode estar vazia 
    printf("\nValor desempilhado: %i", aux);
    printf("\nPilha: ");
    imprime(pilha, &topo);
  }
  printf ("\n");
  
  printf ("\nEmpilhar o 8");
  push(pilha, 8, &topo);
  printf ("\nPilha: ");
  imprime(pilha, &topo);
  printf ("\n");
  
  printf ("\nEmpilhar o 4");
  push(pilha, 4, &topo);
  printf ("\nPilha: ");
  imprime(pilha, &topo);
  printf ("\n");
  
  printf ("\nEmpilhar o 12");
  push(pilha, 12, &topo);
  printf ("\nPilha: ");
  imprime(pilha, &topo);
  printf ("\n");
  
  printf ("\nDesmpilhar");
  aux = pop(pilha, &topo);
  if(aux != 0){ // verifico se realmente desempilhei, pois a pilha pode estar vazia 
    printf("\nValor desempilhado: %i", aux);
    printf("\nPilha: ");
    imprime(pilha, &topo);
  }
  printf ("\n");
  
  printf ("\nEmpilhar o 6");
  push(pilha, 6, &topo);
  printf ("\nPilha: ");
  imprime(pilha, &topo);
  printf ("\n");
  
  printf("\n\n\n");
  return 0;
}