/*En un depósito se reciben 10 barriles de lubricantes para una fábrica de
rulemanes y se desea conocer el volumen total que ocuparán. Existen 4
tipos de barriles (de 25, 40, 50 y 100 litros) que se identifican con A, B, C
y D, respectivamente.*/
#include <stdio.h>

int main() {
    int TipoBarril;
    int cantA=0;
    int cantB=0;
    int cantC=0;
    int cantD=0;
    int volumenT; 
    int cantbarriles=0;

    while (cantbarriles<10)
    {
        printf("Ingrese el tipo de barriles   \n ");
        scanf("%d", &TipoBarril);

        switch (TipoBarril)
        {
        case 25:
            cantA++;
            break;
         case 40:
            cantB++;
            break;
         case 50:
            cantC++;
            break;
         case 100:
            cantD++;
            break;
        default:
        printf("El dato ingresado es incorrecto :( ");
            break;
        }

        cantbarriles++;

    }

    volumenT = cantA * 25 + cantB * 40 + cantC * 50 + cantD * 100;

    printf("El volumen total ocupado por los barriles es: %d \n", volumenT);

    return 0;
}
