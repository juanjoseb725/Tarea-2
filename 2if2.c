// sueldo de trabajador
#include <stdio.h>

void main()
{
  int sueldo, sueldofinal;
  printf("Bienvenido te ayudaremos a saber que aumento tientes y tu sueldo final\n");
  printf("Ingrese su sueldo actual\n");
  scanf("%d", &sueldo);
  if(sueldo<1000)
  {
    printf("Su aumento es del 15%\n");
    sueldofinal=sueldo+(sueldo*0.15);
  }
  else
  {
    printf("Su aumento es del 12%\n");
    sueldofinal=sueldo+(sueldo*0.12);
  }
   printf("Su Sueldo final  es: $%d\n", sueldofinal);
}
