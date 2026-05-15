//Hacer un programa  que calcule la suma de los numeros pares comprendidos entre el 10 y 50.
#include<stdio.h>

void main()
{
  int  i;
  int par= 8;
  int suma=0;
  printf("Te daremos la suma de los pares entre 10 y 50\n");
  for(i=0; i<21; i++)
    {
      par=par+2;
      suma=suma+par;
    }
  printf("La suma es igual a %d\n", suma);

}
