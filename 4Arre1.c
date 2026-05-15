//Escribir un programa tal que dado como entrada un arreglo unidimensional de enteros, obtenga como resultado la suma de los mismos.
#include<stdio.h>

void main()
{
int suma=0;
int n,i;
printf("Bienvenido en este programa te daremos la suma de los enteros que nos proporciones\n");
printf("Ingresa la cantidad de enteros que nos daras.\n");
scanf("%d",&n);
int enteros[n];
for(i=0; i<n;i++)
 {
   printf("Ingresa el entero \n");
   scanf("%d",&enteros[i]);
   suma=suma +enteros[i];
 }
printf("La suma es:%d\n",suma);
  
  
  
}
