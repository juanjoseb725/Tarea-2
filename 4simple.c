#include <stdio.h>

void main() {
    float dinero, extra, interes, montofinal;

    printf("Monto final de Inversion Mensual\n");
    
    printf("Ingrese la cantidad a invertir:\n ");
    scanf("%f", &dinero);
    
    printf("Ingrese la tasa de interes mensual (en decimal, ej. 0.05 para 5%):\n");
    scanf("%f", &interes );
    extra = dinero*interes;
    montofinal =dinero+ extra;

    printf("Su monto total acumulado es: $%.2f\n", montofinal);

}
