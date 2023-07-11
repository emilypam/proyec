#include<stdio.h>

int main()
{
    int grupovacas, ntotalvacas;
    float pesocamion, pesovacas, pesototal;
    float Ltotal, lvacas;
    int contador=0, contadorV=0, contadorG=0;
    float contadorL=0;


    printf("Ingresa el  numero de grupos entre los que necesitas elegir una opcion---->  ");
    scanf("%d", &grupovacas);

    printf("\nIngrese el peso que puede cargar el camion en toneladas----->  ");
    scanf("%f", &pesocamion);

    pesocamion= pesocamion*1000;

    while (contador<grupovacas){

        printf("\nIngrese el peso por vaca en kl----->  ");
        scanf("%f", &pesovacas);

        printf("\nIngrese la cantidad de litros general del grupo de vacas---->   ");
        scanf("%f", &lvacas);

        ntotalvacas=pesocamion/pesovacas;

        Ltotal= ntotalvacas*lvacas;

        contador++;

        printf("\nDel grupo numero---> %d: se pueden llevar---> %d vacas que produciran---> %.2f de litros de leche\n", contador, ntotalvacas, Ltotal);

        if (Ltotal>contadorL){

            contadorL= Ltotal;
            contadorV=ntotalvacas;
            contadorG= contador;
        }
    }
    
    printf("\nEl mejor grupo para la compra de vacas es el grupo %d, con %d vacas y que produce %.2f de litros de leche", contadorG, contadorV, contadorL);
    
}