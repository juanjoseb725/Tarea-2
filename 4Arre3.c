//Escribir un programa tal que dado como entrada un arreglo unidimensional de enteros, determinar cu ́antos de ellos son positivos, negativos o nulos.
#include<stdio.h>
void main()
{
int posi=0;
int nega=0;
int neu=0;
int n,i;
printf("Bienvenido en este programa te diremos cuantos nulos, positivos o negativos nos diste \n");
printf("Ingresa la cantidad de enteros que nos daras.\n");
scanf("%d",&n);
int enteros[n];
for(i=0; i<n;i++)
 {
   printf("Ingresa el entero \n");
   scanf("%d",&enteros[i]);
   if(enteros[i]<0)
   {
     nega=nega+1;
   }
   else
   {
     if(enteros[i]>0)
     {
       posi=posi+1;
     }
     else
     {
       neu=neu+1;
     }
   }
 }
  
printf("RESULTADOS\n");
printf("Postivos= %d\n",posi);
printf("Negativos = %d\n",nega);
printf("Neutros= %d\n",neu);
  
  
  
  
}
