/*Realizar un programa en c que cuente la cantidad de veces que se ingresan números pares y la cantidad de números 
impares hasta que se ingrese un número negativo. El cero no se cuenta.*/
#include <stdio.h>
main()
{
 int num;
 int contadorpares=0;
 int contadorimprares=0;
 int nuevalor;

do{
    printf("Ingrese un numero \n");
    scanf("%d", &num);

    if (num>0){

        if (num%2==0){
        contadorpares++;
        }
        else{
        contadorimprares++;
        }
     
    }

     
    printf("Desea ingresar un nuevo numero si:0  no:1 \n");
    scanf("%d", &nuevalor);
    
    
}while (nuevalor==0);

printf(" \nLa cantidad de numeros impares es de   %d  \n", contadorimprares);
printf("La cantidad de numeros pares es de   %d    \n", contadorpares);

}