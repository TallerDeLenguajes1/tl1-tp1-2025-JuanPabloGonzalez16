#include <stdio.h>
int cuadrado(int a);
void cuadradoDeN(int a);
void invertir(int *a,int *b);
void orden(int *a,int *b);
int main(){
    int var,a,b,c,d,e,f;
    printf("\nIngrese el valor de su variable: ");
    scanf("%d",&var);
    printf("\nLa direccion de var es : %p",&var);
    printf("\nEl contenido de var es : %d",var);
    a = 10; 
    b = 20;
    c = 30;
    d = 12;
    e = 15;
    f = 90;
    printf("\nEl cuadrado de c es : %d",cuadrado(c));
    cuadradoDeN(b);
    cuadradoDeN(d);
    cuadradoDeN(f);
    invertir(&f,&a);
    invertir(&e,&a);
    invertir(&d,&b);
    orden(&a,&c);
    orden(&b,&d);
    orden(&e,&f);
    return 0;
}
int cuadrado(int a){
    int x;
    x = a * a;
    return x;
}
void cuadradoDeN(int a){
    int x;
    x = a * a;
    printf("\nEl cuadrado de %d es %d",a,x);
}
void invertir(int *a,int *b){
    int aux;
    if(a != b){
        aux = *a; //Auxiliar guarda el valor de a
        *a = *b; //A guarda el valor de b
        *b = aux; // b guarda el valor de a
    }
    printf("\nEl valor de a es : %d y el valor de b es : %d",*a,*b);

}

/*Dado dos parámetros de entrada, deberá devolverlos de forma
ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(a,b) //deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande*/
void orden(int *a,int *b){
    if(*a > *b){
        int aux = *a;
        *a = *b;
        *b = aux;
        printf("\nEl valore mas chico es a: %d\n El valor mas grande b es : %d",*a,*b);
    }else if(*b == *a){
        printf("\nAmbos valores son iguales");
    }else{
        printf("\nEl valor mas chico es a: %d\nEl valor mas grande b es : %d",*a,*b);
    }
}
