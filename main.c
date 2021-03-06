// NOMBRE Y APELLIDOS: MART�N SENDE POMBO
// CURSO: 2019/20   ESTUDIOS: GRADO DE BIOTECNOLOG�A

#include <stdio.h>
#include <locale.h>
void main()
{
    // Permite emplear los carateres propios del espa�ol incluidos en el alfabeto ASCII extendido
    setlocale(LC_ALL, "spanish");

    /* Imprime en pantalla el nombre de la pr�ctica y inicializa la varible cuyo valor condiciona la ejecuci�n del bucle
    "do ... while" que aparece a continuaci�n */
    printf("\n\n PR�CTICA n� 3");
    char caracter;

    // Permite visualizar y emplear el men� de este programa
    do {
        // Presenta en pantalla el t�tulo y opciones del men�
        printf("\n\n ------------------------------- MEN� -------------------------------------------------------");
        printf("\n\n 1: Suma de n�s comprendidos entre el 1 y el 500, ambos incluidos");
        printf("\n 2: Media de los n�s impares comprendidos entre el 1 y el 255, incluido el 1, excluido el 255");
        printf("\n 3: Producto de los n�s pares comprendidos entre el 10 y el 21, ambos excluidos");
        printf("\n\n Introduzca una opci�n entre 1 y 3: ");

        // Estas 2 instrucciones permiten elegir una de las 3 opciones disponibles
        int eleccion;
        scanf("%d", &eleccion);

        // Esta sentencia de selecci�n "switch" ejecuta la opci�n elegida
        switch (eleccion){
            // Realiza la suma de todos los n�meros comprendidos entre el 1 y el 500, ambos incluidos
            case 1:{
                unsigned int sumando, resultado1;
                for(sumando = 2, resultado1 = 1; sumando <= 500; sumando++){
                    resultado1 = resultado1 + sumando;
                }
                printf("\n El resultado de la suma es: %d", resultado1);
                printf("\n");
                break;
            }
            /* Calcula la media aritm�tica de todos los n�meros impares comprendidos entre el 1 y el 255,
            incluido el primero pero no el segundo */
            case 2:{
                unsigned int numero; float resultado2;
                for(numero = 1, resultado2 = 0; numero < 255; numero = numero + 2){
                    resultado2 = resultado2 + numero;
                }
                resultado2 = resultado2 / (254 / 2);
                printf("\n El resultado de la media es: %.3f", resultado2);
                printf("\n");
                break;
            }
            // Lleva a cabo el producto de los todos los n�meros pares comprendidos entre el 10 y el 21, ambos excluidos
            case 3:{
                unsigned int factor, resultado3;
                for(factor = 12, resultado3 = 1; factor < 21; factor = factor + 2){
                    resultado3 = resultado3 * factor;
                }
                printf("\n El resultado del producto es: %d", resultado3);
                printf("\n");
                break;
            }
            /* Avisa al usuario de que, en lugar de introducir en el b�fer el n�mero correspondiente a alguna de las 3 opciones,
            ha escrito otro distinto o uno de los car�cteres 'n' y 'N' */
            default:{
                printf("Opci�n no v�lida");
            }
        }

        // Pregunta al usuario si quiere finalizar la ejecuci�n del programa y recoge su respuesta escrita en el "buffer"
        printf("\n �Desea finalizar la ejecuci�n del programa? En caso negativo, introduzca n o N: ");
        scanf(" %c", &caracter);
    } while ((caracter == 78) || (caracter == 110));

}
