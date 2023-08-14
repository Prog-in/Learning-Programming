#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pFile;
    char letra;
    int i;

    pFile = fopen("/home/joao/Programacao/c/aprender/letras.txt", "r+");
    if (pFile == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    printf("Qual # letra voce gostaria de mudar (1-26): ");
    scanf(" %d", &i);

    fseek(pFile, i-1, SEEK_SET);

    fputc('*', pFile);

    fseek(pFile, 0, SEEK_SET);
    printf("Assim esta o arquivo agora:\n");
    for (i = 0; i < 26; i++) {
        letra = fgetc(pFile);
        printf("A proxima letra eh %c\n", letra);
    }

    fclose(pFile);

    return 0;
}
