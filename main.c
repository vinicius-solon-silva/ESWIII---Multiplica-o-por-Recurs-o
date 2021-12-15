#include <stdio.h>

int total = 0;

int soma (int a, int b){

  if (a > 1){
    total = soma(a-1, b);
  }

  return total + b;
}

int main (){

  int z,k;

  printf ("\n\tDigite valor inteiro para k: ");
  scanf ("%d", &k);
  printf ("\n\tDigite valor inteiro para z: ");
  scanf ("%d", &z);

  printf ("\n\tResultado da operacao = %d", soma(k, z) );

}
