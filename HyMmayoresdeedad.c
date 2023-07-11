/* Imprima la cantidad de mujeres mayores de edad y la cantidad de
hombres mayores de edad de un total de N personas. Muestre
también sus porcentajes.*/
#include<stdio.h>
int main(){
    int Npersonas;
    int edad;
    int gen;
    int porcentajeM;
    int porcentajeF;
    int contador=0;
    int contadorM=0;
    int contadorF=0;

    printf("Ingrese la cantidad de personas   ");
    scanf("%d", &Npersonas);

    while (contador<Npersonas)
    {
        printf("Ingrese el genero 0: masculino o 1: femenino   ");
        scanf("%d", &gen);
        printf("Ingrese la edad    ");
        scanf("%d", &edad);

        switch (gen)
        {
        case 0:
        if (edad >= 18)
        {
            contadorM++;
        }
            break;
        case 1:
        if (edad>=18)
        {
            contadorF++;
        }
            break;
        default:

            printf("El genero ingresado no existe");
            break;
        }
        contador++;
    }

    porcentajeM= (contadorM*100)/Npersonas;
    porcentajeF= (contadorF*100)/Npersonas;
    
printf ("Las mujeres mayores a 18 años son:   %d ", contadorF);
printf("y el porcentaje es de  %d ", porcentajeF);
printf ("Los hombres mayores a 18 años son:   %d ", contadorM);
printf("y el porcentaje es de  %d   ", porcentajeM);
    
}
