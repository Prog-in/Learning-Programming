// 2 formas de passar argumentos entre funcoes: por valor e por endereco.
// Aqui, usa-se a passagem por valor

#include <stdio.h>

int main() {
    int i;
    printf("Digite um inteiro: ");
    scanf(" %d", &i);

    half(i);
    printf("em main(), i ainda eh %d\n", i);

    return 0;
}

int half(int i) {
    i = i / 2;
    printf("em half(), i eh %d\n", i);

    return 0;
}

