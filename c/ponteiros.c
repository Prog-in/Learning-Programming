// indirecao simples: ponteiro para variavel
// Operador de endereco: &
// Operador de indirecao/dereferencia: *
//
// indirecao multipla: ponteiro para ponteiro

#include <stdio.h>

int main()
{
    // indirecao simples
    int *x, y, valor;

    valor = 35;
    x = &valor;  // atribuindo o endereco de 'valor' a 'x'
    y = *x;  // atribuindo o conteudo da variavel apontada por 'x' a 'y'

    printf("Endereco da variavel comum \'valor\': %p\n", &valor);
    printf("Conteudo do ponteiro \'x\': %p\n", x);
    printf("Endereco da variavel \'x\': %p\n", &x);
    printf("Conteudo da variavel apontada por \'x\': %d\n", *x);
    printf("Conteudo da variavel comum \'y\': %d\n", y);

    // indirecao multipla
    int **pont2, *pont1, a;
    
    a = 40;
    pont1 = &a;
    pont2 = &pont1;

    printf("\nEndereco da variavel \'a\': %p\n", &a);
    printf("Endereco do ponteiro \'pont1\': %p\n", &pont1);
    printf("Endereco do ponteiro \'pont2\': %p\n", &pont2);
    printf("Endereco apontado por \'pont1\': %p\n", pont1);
    printf("Endereco apontado por \'pont2\': %p\n", pont2);
    printf("Valor armazenado em \'a\': %d\n", **pont2);

    return 0;
}
