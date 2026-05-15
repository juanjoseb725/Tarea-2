// programa lea 100 n umeros naturales y cuente cuantos de ellos son positivos, negativos o nulos.
#include<stdio.h>

void main()
{
  int n, i;
  int posi = 0;
  int nega = 0;
  int nulos = 0;
  printf ("Te ayudaremos a contar cuantos numeros son positivos, negativos o nulos.\n");
  for(i=0;i<100; i++)
  {
    printf("Ingrese el numero puede ser positivo ,negativo o nulo.\n");
    scanf("%d",&n);
    if(n>0)
    {
      posi=posi+1;
    }
    else
    {
      if(n<0)
      {
        nega=nega+1;
      }
      else
      {
        nulos=nulos+1;
      }
    }
  }
printf("RESULTADOS\n");
printf("Positivos= %d\n",posi);
printf("Negativos= %d\n",nega);
printf("Nulos= %d\n",nulos);
  
  }
