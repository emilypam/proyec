/*Realizar un programa en C que resuelva el siguiente problema: 
En un bosque se necesita saber el promedio de diámetro de cada tronco de ciprés y el promedio de su altura. 
El proceso termina cuando el usuario responde con una ‘N’, mientras tanto, debe responder con ‘S’.*/

#include<stdio.h>
main()
{
    char nueresp;
    int controncos = 0;
    double sumadia = 0.0;
    double sumaalt = 0.0;

    do {
        double diametro, altura;
        printf("Ingrese el diámetro del tronco de ciprés: ");
        scanf("%lf", &diametro);
        printf("Ingrese la altura del tronco de ciprés: ");
        scanf("%lf", &altura);

        controncos++;
        sumadia += diametro;
        sumaalt += altura;

        printf("¿Desea ingresar otro tronco? (S/N): ");
        scanf(" %c", &nueresp);
    } while (nueresp == 'S' || nueresp == 's');

    if(controncos > 0){
        double promedio_diametro = sumadia / controncos;
        double promedio_altura = sumaalt / controncos;

        printf("Promedio de diámetro de los troncos: %.2lf\n", promedio_diametro);
        printf("Promedio de altura de los troncos: %.2lf\n", promedio_altura);


    } else {
        printf("No se ingresaron troncos de ciprés.\n");
    }
    
}
