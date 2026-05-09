//Programa de radio y circunferencia
#include<stdio.h>

void main()
{
  float radio ;
  float pi=3.141592 ;
  float circunferencia, area;
  printf("Bienvenido este programa calculara Area y Radio\n");
  printf("Ingrese el radio\n");
  scanf( "%f", &radio);
  area=pi*radio*radio;
  circunferencia=2*pi*radio;
  printf("Area: %f\n", area);
  printf("Circunferencia: %f\n", circunferencia); 

}
