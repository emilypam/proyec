/*Realizar un programa en C que permita acertar la edad de Matusalen(969) 
el programa debe indicar si es la respuesta correcta, caso contrario indicar 
si es menor o mayor. Se debe permitir solo 3 intentos, si acierta dentro de 
los 3 intentos debe terminar el programa.
Al final del programa si no acertó se debe desplegar un mensaje de que lo intente nuevamente, 
Si dice si, se debe permitir repetir el programa.*/

//Emily Moreno
#include <stdio.h>

int main() {
    int intentos = 3;
    int respuesta;
    int edadMatusalen = 969;
    char reiniciar;

    do {
        printf("Adivina cual es la edad de Matusalén: ");
        scanf("%d", &respuesta);

        if (respuesta == edadMatusalen) {
            printf("¡CORRECTO! La edad de Matusalén es 969.\n");
            return 0;
        } 
        else if (respuesta < edadMatusalen) {
            printf("El dato ingresado es Incorrecto. La edad de Matusalén es MAYOR.\n");
        } 
        else {
            printf("El dato ingresado es Incorrecto. La edad de Matusalén es MENOR.\n");
        }

        intentos--;

        if (intentos > 0) {
            printf("Te quedan %d intentos.\n", intentos);
        }
        else {
            printf("No has adivinado la edad de Matusalén :(.\n");
            printf("¿Quieres intentarlo nuevamente? (si/no): ");  //S o s: Si o N o n: No
            scanf(" %c", &reiniciar);

            if (reiniciar == 's' || reiniciar == 'S') {
                intentos = 3;
            } else {
                printf("Gracias por intentarlo. ¡Hasta luego!\n");
                
            }
        }
    } while (intentos > 0);

}