//construya un programa tal que dado como entrada un arreglo unidimensional de enteros y un n ́umero entero, determine cu ́antas veces se encuentra el n ́umero dentro del arreglo.
#include<stdio.h>
void main()
{

int v=0;
int n,i,x;
printf("Bienvenido en este programa te dira  cuantas veces se encuentra el n ́umero dentro del arreglo.\n");
printf("Ingresa el tamaño del arreglo .\n");
scanf("%d",&n);
int enteros[n];
printf("Ingresa el entero que contaremos cuantas veces se repite.\n");
scanf("%d",&x);

for(i=0; i<n;i++)
 {
   printf("Ingresa el entero \n");
   scanf("%d",&enteros[i]);
   if(enteros[i]==x)
   {
    v=v+1;
   }
 
 }
printf("Las veces que se repitio su numero son: %d", v);


}
