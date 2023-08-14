#include <stdio.h>
#include <string.h>

int main() {
    char array[6] = "abcde";
    
    // Quando o array eh inicializado, os valores nos indices sao armazenados,
    // como imaginamos. Porem, o C ainda inicializa um ponteiro chamado, nesse
    // caso, de "array", que armazena o endereco do primeiro elemento do array.
    //
    // array[0] é equivalente a *(array+0)
    // array[1] é equivalente a *(array+1)
    // ...
    //
    // Na realidade, o C nos ajuda aqui, pois eh somado 1 para qualquer tipo de 
    // dado na array. Esse 1 representa uma unidade de determinado tipo, nesse 
    // caso array. 
    
    printf("%c é a mesma coisa de %c\n", array[0], *(array+0));
    
    
    char name[] = "Joao Gabriel";
    char *pname = "Joao Gabriel";

    // name e pname apontam para 'J'
    printf("name: %c | pname: %c\n", *name, *pname);

    // sao criados novos espacos, mesmo que as strings sejam iguais
    printf("name: %p | pname: %p\n", name, pname);

    pname = "Joao Gabriel Feres";
    pname = "Joao";
    
    char *objeto;
    
    fgets(objeto, 11, stdin);
    
    printf("%s\n", objeto);

    return 0;
}
