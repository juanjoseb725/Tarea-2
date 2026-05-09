//Programa que covierte dolares a pesos
#include<stdio.h>

void main ()
{
float dolares;
float pesos;

printf("Bienvenido,  este programa hace la conversion de dolares a pesos\n");
printf("Ingresa la cantidad de dolares\n");
scanf("%f",&dolares);
pesos= dolares*11.96;
printf("Sus %.2f dolares en pesos son: $%.2f\n", dolares, pesos);
}
