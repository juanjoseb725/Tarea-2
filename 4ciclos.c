//Hacer programa  que calcule e imprima el producto de los N primeros n ́umeros naturales.
#include<stdio.h>
void main()
{
  int n, i;
  double p=1;
  printf("Ingrese un numero natural\n");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
    {
      p=p*i;

    }
  
  printf("El producto es %f\n",p);
}
