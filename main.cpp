#include <iostream>
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
void function_swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main (){
    //Respuesta de la 1:
    //1 2 3 4 5 6 7 8 9 10
    //ejercicio_1();
    
    //Respuesta de la 2:
    //7 5 10
    int a=5,b=10,c=7;
    function_swap(a,b);
    function_swap(a,c);
    cout << a << " " << b <<" "<< c << endl;



    return 1;
}
