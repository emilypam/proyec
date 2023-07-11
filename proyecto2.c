#include<stdio.h>
int main()
{
    int numtotalvacas, Continuar, grupovacascamion;
    float producciondeleche, totalproduccion,pesototalcamion, pesovacas, totalleche;
    int contadorgrupo=0, contadorvacas=0;
    float contadorltr=0;

    printf("\nIngrese el peso que puede cargar el camion en toneladas----->  ");
    scanf("%f", &pesototalcamion);

    pesototalcamion= pesototalcamion*1000;

    do{
        printf("Ingrese el grupo de las vacas---> ");
        scanf("%d", &grupovacascamion);

        printf("Introduza el peso de las vacas---> ");
        scanf("%f", &pesovacas);

        printf("Introduzca la produccion de litros de leche por vaca---> ");
        scanf("%f", &producciondeleche);

        numtotalvacas = pesototalcamion/pesovacas;
		totalleche = numtotalvacas*producciondeleche;

        printf("\nDel grupo numero---> %d: se pueden llevar---> %d vacas que produciran---> %.2f de litros de leche\n", grupovacascamion, numtotalvacas, totalleche);

        if (totalleche>contadorltr){
            contadorltr<-totalleche;
			contadorgrupo<-grupovacascamion;
			contadorvacas<-numtotalvacas;
        }
          
        printf("Deseas Continuar? si=0, no=1---> ");
        scanf("%d", &Continuar);

    }while (Continuar==0);
    

    printf("\nEl mejor grupo para la compra de vacas es el---> %d: Ya que producen---> %.2f de litros de leche\n", contadorgrupo, contadorltr);

}