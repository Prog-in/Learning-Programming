// Passar por endereco: forma padrao de se passar arrays como argumento
// e pode ser usada como alternativa a passar por valor, usando * e &
// CUIDADO: ao modificar o valor de uma variavel passada por endereco,
// mudara o valor naquele endereco de memoria e, consequentemente,
// seu valor mudara em todas as variaveis que estiverem naquele endereco
//
// USE PROTOTIPOS NAS FUNCOES! (declaracao de funcoes)
//
// main(), como a primeira funcao a aparecer no programa (convencao)
// nao precisa de prototipo, e eh conhecida como self-prototyping 
// function pois nenhuma funcao chama main() antes dela aparecer

#include <stdio.h>

// declaracao da funcao
void half(int *i);

int main() {
    int i;

    printf("Digite um inteiro: ");
    scanf(" %d", &i);

    half(&i);
    printf("Em main(), i eh %d\n", i);

    return 0;
}

// definicao da funcao
void half(int *i) {
    *i = *i / 2;

    printf("Em half(), *i eh %d\n", *i);
}
