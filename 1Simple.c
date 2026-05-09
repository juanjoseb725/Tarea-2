//Bautista Valdivia Juan Jose, Programa que suma , multiplica y resta dos numeros

#include <stdio.h>

void main()
{
  int a, b;
  int suma, resta, multiplicacion;
  printf("Bienvenido este programa te dara resultado de suma resta y multiplicacion\n");
  printf("Ingrese los dos numeros a sumar separados por una coma\n");
  scanf("%d , %d", &a, &b);
  suma=a+b;
  resta=a-b;
  multiplicacion=a*b;
  printf("Resultados\n");
  printf("Suma: %d\n", suma);
  printf("Resta: %d\n", resta);
  printf("Multiplicacion: %d\n", multiplicacion);

}
