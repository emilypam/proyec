#include <stdio.h>

int main() {
    int edad, cantAprobadas, cantDesaprobadas;
    int cantAlumnosMayoresDesaprobadas = 0;
    int cantMateriasAprobadas = 0, cantMateriasDesaprobadas = 0;
    int edadTripleMaterias = 0, cantTripleMaterias = 0;
    
    int cantidadAlum;
    int totalAlumnos = 0;
    float porcentajeAprobadas, porcentajeDesaprobadas;

    printf ("Ingrese la cantidade de alumnos     ");
    scanf("%d", &cantidadAlum);


    while (totalAlumnos<cantidadAlum) {
        printf("Ingrese la edad del alumno:  ");
        scanf("%d", &edad);


        printf("Ingrese la cantidad de materias finales aprobadas por el alumno: ");
        scanf("%d", &cantAprobadas);

        printf("Ingrese la cantidad de materias finales desaprobadas por el alumno: ");
        scanf("%d", &cantDesaprobadas);

        

        // 1. Contar la cantidad de alumnos mayores a 21 años con más de dos materias desaprobadas
        if (edad > 21 && cantDesaprobadas > 2) {
            cantAlumnosMayoresDesaprobadas++;
        }

        // 2. Calcular la cantidad total de materias aprobadas y desaprobadas
        cantMateriasAprobadas += cantAprobadas;
        cantMateriasDesaprobadas += cantDesaprobadas;

        // 3. Mostrar la edad de las personas con el triple de materias aprobadas respecto a las desaprobadas
        if (cantAprobadas == 3 * cantDesaprobadas) {
            printf("Edad del alumno con el triple de materias aprobadas: %d\n", edad);
            edadTripleMaterias = edad;
            cantTripleMaterias++;


            totalAlumnos++;
        }
    }

    // 2. Calcular el porcentaje de materias aprobadas y desaprobadas
    porcentajeAprobadas = (float) cantMateriasAprobadas / (cantMateriasAprobadas + cantMateriasDesaprobadas) * 100;
    porcentajeDesaprobadas = (float) cantMateriasDesaprobadas / (cantMateriasAprobadas + cantMateriasDesaprobadas) * 100;

    // Mostrar los resultados
    printf("\n--- Resultados ---\n");
    printf("1. Cantidad de alumnos mayores a 21 años con más de dos materias desaprobadas: %d\n", cantAlumnosMayoresDesaprobadas);
    printf("2. Porcentaje de materias aprobadas: %.2f%%\n", porcentajeAprobadas);
    printf("   Porcentaje de materias desaprobadas: %.2f%%\n", porcentajeDesaprobadas);
    printf("3. Edad de las personas con el triple de materias aprobadas respecto a las desaprobadas: %d (Cantidad: %d)\n", edadTripleMaterias, cantTripleMaterias);

    return 0;
}
