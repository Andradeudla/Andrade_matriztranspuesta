#include <stdio.h> //se incluyen las bibliotecas para las variables y los numeros random
#include <stdlib.h>
#include <time.h>

int main() // la variable principal del programa de inicializacion
{
    printf("----------Bienvenido al Programa de Matriz Transpuesta---------- \n");
    
    int n, m;                                // se define las variables para filas y columnas
    printf("ingrese el valor para filas: "); // se solicita al usuario ingresar el numero de filas
    scanf("%d", &n);                         // se lee los datos ingresados por el usuario

    printf("ingrese el valor para columnas: "); // se solicita al usuario ingresar el numero de columnas
    scanf("%d", &m);                          // se lee los datos ingresados por el usuario

    int matrix[n][m]; // se define las variables con el numero de espacios ingresados por el usuario de filas y columnas.
    int matrix2[m][n]; //Se define las variables de la matriz transpuesta
    srand(time(NULL)); //se crea la funcion para numeros randoms

    printf("---Esta es la Matriz Original--- \n");

    for (int i = 0; i < n; i++)//se crea el primerfor para la matriz original de las filas
    {
        printf("\n");// se coloca para separa las filas
        for (int j = 0; j < m; j++)// Se crea en segundo for para la matriz original de columnas
        {
            matrix[i][j] = rand() % 100 + 1;//Se define que la matriz se ponga el rango de numeros random que se solicitan en cada cuadro de la matriz
            printf("%d \t", matrix[i][j]); // se inprimer la matriz con numeros random
        }
    }

    printf("\n");
    printf("---Esta es la Matriz transpuesta--- \n");
    for (int i = 0; i < m; i++)//se realiza el primer for para la matriz compuesta
    {
        printf("\n");
        for (int j = 0; j < n; j++)//se realiza el segundo for 
        {
            matrix2[i][j] = matrix[j][i];// se invierta la matriz con las filas y columas hevha anteriormente con los numeros random
            printf("%d \t", matrix2[i][j]);//se inprime la matriz transpuesta
        }
        
    }
    

    return 0;
}