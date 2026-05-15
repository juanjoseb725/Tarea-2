//Programa que determina si  un numero es divisor del otro 
#include<stdio.h>

void main()
{
  int a, b, res;
  printf("Este programa determinara si un numero es divisor de otro.\n");
  printf("Ingrese el divisor.\n");  
  scanf("%d", &a);
  printf("Ingrese el dividendo.\n");  
  scanf("%d", &b);
  if(a%b==0)
  {
    printf("%d es divisor de %d\n", a, b);  
      }
  else
  {
    printf("%d  no es divisor de %d\n", a, b); 
  
   }
}
