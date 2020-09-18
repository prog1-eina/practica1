/*
 * Curso de Programación 1. Práctica 1
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 20 de septiembre de 2019
 * Resumen: Tarea 5
 */
#include <iostream>
using namespace std;

/*
 * Programa que escribe en la pantalla una tabla de potencias: en cada línea un
 * valor del 1 al 24, su cuadrado y su cubo, de acuerdo con el siguiente
 * formato:
 * 
 *       x    x^2    x^3
 *     ===    ===    ===
 *       1      1      1
 *       2      4      8
 *       3      9     27
 *       4     16     64
 *     ...    ...    ...
 *      24    576  13824
 * 
 */
int main() {   
    cout << "x" << "x^2" << "x^3" << endl;
    cout << "===" << "===" << "===" << endl;

    // La instrucción que aparece a continuación es una «instrucción iterativa
    // indexada» o bucle «for» que veremos con detalle en el tema 5. Mientras
    // tanto, puede bastar saber que la instrucción de escritura en la pantalla
    // que aparece en el cuerpo del «for» se va a repetir varias veces (en
    // concreto, 24 veces), con el valor del dato varible «x» cambiando de
    // iteración en iteración. La primera vez que se ejecute (1ª iteración), x
    // habrá tomado el valor 1; la segunda vez que se ejecute, x valdrá 2 y así
    // sucesivamente irá incrementando su valor hasta que en la 24ª y última
    // iteración, x valdrá 24.
    for (int x = 1; x <= 24; x++) {
        cout << x << x * x << x * x * x << endl;
    }

    return 0;
}
