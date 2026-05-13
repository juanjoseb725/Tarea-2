//Ticket de ida y vuelta programa 
#include <stdio.h>

void main()
{
  float precio_ticket,precio,dtotal;
  int dias;
  printf("Bienvenido este programa te ayudara a saber si tienes descuento y el precio de ticket\n");
  printf("Ingresa tus días de estancia\n");
  scanf("%d", &dias);
  printf("Ingresa tu distancia total en km\n");
  scanf("%f", &dtotal);
  precio_ticket=dtotal*0.23;
  if(dtotal>800 && dias>7) 
  {
    printf("Aplica para el descuento del 30% \n");
    precio_ticket=precio_ticket*0.70;
  }
  printf("El precio del ticket es de: $%.2f\n",precio_ticket);
}
