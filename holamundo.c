#include <stdio.h>

int main()
{
    float Nota1, Nota2, Nota3;
    float Promedio, ExamenFinal, ProyectoFinal, NotaFinal;
    printf("Ingrese la nota 1");
    scanf("%f", &Nota1);
    scanf("%f", &Nota2);
    scanf("%f", &Nota3);
    scanf("%f", &ExamenFinal );
    scanf("%f", &ProyectoFinal );
    Promedio = (Nota1+Nota2+Nota3)/3;
    NotaFinal= 0.55 * Promedio + 0.3*ExamenFinal+0.15*ProyectoFinal;
    printf("La nota final del estudiante es % .2f", NotaFinal);
    
}