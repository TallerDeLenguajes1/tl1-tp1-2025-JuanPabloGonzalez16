#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int *punt = &a;    
    printf("Contenido del puntero : %d",*punt);
    printf("\nDireccion de memoria almacenada por el puntero: %p",punt);
    printf("\nDireccion de memoria de la variable: %p",&a);
    printf("\nDireccion de memoria del puntero: %p",&punt);
    printf("\nTamanio de memoria utilizado por esa variable: %d",sizeof(a));
    return 0;
}
/*Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
1) El contenido del puntero
2) La dirección de memoria almacenada por el puntero.
3) la dirección de memoria de la variable.
4) la dirección de memoria del puntero.
5) el tamaño de memoria utilizado por esa variable usando la
función sizeof()*/
