/* En la universidad se registran los siguientes datos por alumnos: edad,
cantidad de materias finales aprobadas y cantidad de materias fina-les
desaprobadas. Se necesita hallar y mostrar lo siguiente:
1. Cantidad de alumnos mayores a 21 años de edad que tienen más de dos materias finales desaprobadas.
2. Porcentaje de materias aprobadas y materias desaprobadas (por separado) de todxs lxs alumnxs.
3. Mostrar la edad de las personas que tienen el triple de materias aprobadas con respecto a las que desaprobaron. 
(se debe hacer mientras se efectúa el bucle)*/

#include<stdio.h>
main()
{
    int cantidadAlum1=0;
    int cantidadAlum;
    int edad;
    int materiasA;
    int cantMateriasAprobadas=0;
    int cantMateriasDesaprobadas=0;
    int materiasDes;
    int edadTripleMaterias;
    int cantTripleMaterias=0;
    int matap=0;
    int matdes=0;
    int edadaprovados=0;
    float porcentajeAp, porcentajedes;

    printf ("Ingrese la cantidade de alumnos     ");
    scanf("%d", &cantidadAlum);

    while (cantidadAlum1<cantidadAlum)
    {
        printf("Ingrese la edad del alumno    ");
        scanf("%d", &edad);

        printf("Ingrese la cantidad de materias aprobadas del alumno   ");
        scanf("%d", &materiasA);

        printf("Ingrese la cantidad de materias desaprobadas del alumno   ");
        scanf("%d", &materiasDes);


        cantidadAlum1++;

        if (edad>21 && materiasDes>2)
        {
            matdes++;
        }

        cantMateriasAprobadas += materiasA;
        cantMateriasDesaprobadas += materiasDes;

         if (materiasA == 3 * materiasDes) {
            printf("Edad del alumno con el triple de materias aprobadas: %d\n", edad);
            edadTripleMaterias = edad;
            cantTripleMaterias++;
        }

    }

    porcentajeAp= (float) cantMateriasAprobadas / (cantMateriasAprobadas + cantMateriasDesaprobadas) * 100;
    porcentajedes= (float) cantMateriasDesaprobadas / (cantMateriasAprobadas + cantMateriasDesaprobadas) * 100;
    
    printf("\n--- Resultados ---\n");
    printf("Cantidad de alumnos mayores a 21 años de edad que tienen más de dos materias finales desaprobadas:   %d \n", matdes);
    printf("Porcentaje de materias aprobadas de todos los alumnos:     %.2f%% \n", porcentajeAp);
    printf("Porcentaje de materias desaprobadas de todos los alumnos:   %.2f%% \n", porcentajedes);
    printf("Edad de las personas con el triple de materias aprobadas respecto a las desaprobadas:  %d Cantidad: %d \n", edadTripleMaterias, cantTripleMaterias);

    return 0;
}
