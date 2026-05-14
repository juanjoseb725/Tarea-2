//ciclo que te da tablas de multiplicar
#include<stdio.h>

void main()
{
  int n, x, r, i;
  printf("Bienvenido en este programa te daremos la tabla de multiplicar del numero que nos proporciones\n");
  printf("Ingresa un numero entero del que quieras saber su tabla de multiplicar\n");
  scanf("%d", &n);
  printf("Ingresa un numero entero hasta el que quieres  multiplicar el anterior \n");
  scanf("%d", &x);
  for (i = 1; i <=x; i++)
  {
    r=n*i;
    printf("%d x %d =%d\n", n, i, r);
  }
}
         
     
  
  
