//Programa que dice cuanto debe pagar el cliente
#include <stdio.h>

int main()
{
  float compra, pago;
  printf("Bienvenido aqui te ayudaremos a saber cuanto tendras que pagar y si es que aplica el desucento dependiendo del monto\n");
  printf("Ingresa el monto de tu compra\n");
  scanf("%f", &compra);
  if(compra>=2500)
  {    
    pago=compra*0.92;
    printf("¡Se ha aplicado un descuento del 8%%!\n");
   }
  else
  {
    pago=compra;
    printf("No se alcanzo el monto minimo para el descuento.\n");
   }
  printf("Su pago debe de ser de : $%.2f\n", pago);
}



