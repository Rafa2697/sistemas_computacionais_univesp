#include <stdio.h>

typedef struct {
    int x;
    char y;
} MyStruct;

int main() {
//    int *p, q, acm = 35;
//    p = &acm;
//    q = *p;
//    printf("Endereço de p: %p\n", (void*)p);
//    printf("Value of q: %d\n", q);

//    int x = 8, *p1, *p2;
//    p1 = &x;
//    p2 = p1;
//    printf("Endereço de p1: %p\n", (void*)p1);
//    printf("Endereço de p2: %p\n", (void*)p2);

// O array arr contém os valores {10, 20, 30, 40, 50}. Ao atribuir arr a ptr, o ponteiro passa a apontar para o primeiro elemento do array, ou seja, para arr[0], cujo valor é 10.

// A instrução ptr = ptr + 3 avança o ponteiro três posições. Assim, ptr passa a apontar para arr[3], que contém 40. Portanto, *ptr acessa e imprime esse valor.

// Na expressão *(ptr - 1), o ponteiro retorna uma posição, apontando para arr[2], cujo valor é 30. Dessa forma, as saídas serão:
// int arr[] = {10, 20, 30, 40, 50};
// int *ptr = arr;
// ptr = ptr+3;
// printf("Value of ptr: %d\n", *ptr);
// printf("Value of ptr: %d\n", *(ptr - 1));

// int x = 10;
// int *p;
// p = &x;
// *p = 20; // Modifica o valor de x para 20
// printf("Value of x: %d\n", x); // Imprime 20


    MyStruct a = {10, 'A'};
    MyStruct b = a; // Copia os valores de a para b
    b.x = b.x * 2;
    printf("%d %c\n", b.x, b.y);

    return 0;
}

