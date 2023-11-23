#include <stdio.h> //se incluyen las bibliotecas para las variables y los numeros random
#include <stdlib.h>
#include <time.h>

int main() // la variable principal del programa de inicializacion
{
    int n, m;                                // se define las variables para filas y columnas
    printf("ingrese el valor para filas: "); // se solicita al usuario ingresar el numero de filas
    scanf("%d", &n);                         // se lee los datos ingresados por el usuario

    printf("ingrese el valor para columnas"); // se solicita al usuario ingresar el numero de columnas
    scanf("%d", &m);                          // se lee los datos ingresados por el usuario

    int matrix[n][m]; // se define las variables con el numero de espacios ingresados por el usuario de filas y columnas.
    int matrix2[n][m]; //Se define las variables de la matriz transpuesta

    printf("----------Bienvenido al Programa de Matriz Transpuesta----------");
    printf("---Esta es la Matriz Original---");

    for (int i = 0; i < n; i++)//se crea el primerfor para la matriz original de las filas
    {
        printf("\n");// se coloca para separa las filas
        for (int j = 0; j < m; j++)// Se crea en segundo for para la matriz original de columnas
        {
            matrix[i][j] = rand() % 100 + 1;//Se define que la matriz se ponga el rango de numeros random que se solicitan en cada cuadro de la matriz
            printf("%d \t", matrix[i][j]); // se inprimer la matriz con numeros random
        }
    }

    return 0;
}