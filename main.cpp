#include <iostream>
#include <string.h>
#define SIZE 10
using namespace std;

/** ejemplo **/
void ejercicio_1 () {
    int array[SIZE];
    int *ptr = array;
    for (int i = 0; i < SIZE; i++) {
        *(ptr + i) = i + 1;
    }
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
}
//void function_swap(int* x, int* y) {
   // int *temp = x;
   // *x = y;
 //   *y = temp;
//}



void FUNCTION_PNT(int a, int b, int c){
    int *pntA, *pntB, *pntC;
    pntA = &a;
    pntB = &b;
    pntC = &c;
    *pntC = (*pntA) + (*pntB);
}

int main (){

    //RESPUESTA N° 1:
    //1 2 3 4 5 6 7 8 9 10
    //RESPUESTA N° 2:
    //7 5 10
    //RESPUESTA N° 3:
    //T
    //L
    //T
    //RESPUESTA N° 4:
    //Opción 4
    //RESPUESTA N° 5:
    //No se puede inicializar un puntero de tipo double que apunte una variable tipo char
    //RESPUESTA N° 6:
    //7 5 10
    //int a = 5, b = 10, c = 7;
    //function_swap(&a,&b);
    //function_swap(&a,&c);
    //cout << a << " " << b <<" "<< c << endl;
    //RESPUESTA N° 7:
    //28
    //RESPUESTA N° 8:
    //0
    //8
    //RESPUESTA N° 9:
    //8
    //15
    //RESPUESTA N°10:
    //8
    //RESPUESTA N° 12:
    //13 13 13
    //RESPUESTA N° 13:
    //5 10 7
    //RESPUESTA N° 14:
    //4 1
    //RESPUESTA N° 15:
    //MIRAR LA FUNCION "FUNCTION_PNT"
    //RESPUESTA N° 16:
    //19
    //RESPUESTA N° 17:
    //ERROR
    //RESPUESTA N° 18:
    //18
    //RESPUESTA N° 19:
    //Recorre una cadena de caracteres desde su ultima posición y alarga su tamaño
    //RESPUESTA N° 20:
    //Recorre una cadena de caracteres y cambia sus comas por espacios



    return 1;
}
