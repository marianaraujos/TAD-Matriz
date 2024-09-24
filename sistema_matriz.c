#include "matriz.h"
#include <stdio.h>

int main() {
    
    Matriz *mat1 = criar(3, 3);

    
    atribuir(mat1, 0, 0, 1.0);
    atribuir(mat1, 0, 1, 2.0);
    atribuir(mat1, 0, 2, 3.0);
    atribuir(mat1, 1, 0, 4.0);
    atribuir(mat1, 1, 1, 5.0);
    atribuir(mat1, 1, 2, 6.0);
    atribuir(mat1, 2, 0, 7.0);
    atribuir(mat1, 2, 1, 8.0);
    atribuir(mat1, 2, 2, 9.0);

    
    printf("Valor na posição (1, 1): %.2f\n", acessa(mat1, 1, 1));
    printf("Valor na posição (2, 0): %.2f\n", acessa(mat1, 2, 0));

    
    libera(mat1);

    
    Matriz* mat2 = criar(2, 2);

    
    atribuir(mat2, 0, 0, 1.0);
    atribuir(mat2, 0, 1, 2.0);
    atribuir(mat2, 1, 0, 3.0);
    atribuir(mat2, 1, 1, 4.0);

    
    printf("Valor na posição (0, 0): %.2f\n", acessa(mat2, 0, 0));
    printf("Valor na posição (1, 1): %.2f\n", acessa(mat2, 1, 1));

    
    liberar(mat2);

    return 0;
}