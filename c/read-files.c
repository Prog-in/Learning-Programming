// ler o arquivo produzido em files2.c (livros.txt) 
// feof() retorna uma condicao verdadeira caso a ultima
// linha do arquivo tenha sido lida

#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *pFile;
    char fileLine[100];
    
    pFile = fopen("/home/joao/Programacao/c/aprender/livros.txt", "r");
    
    if (pFile == NULL) {
        printf("Erro ao abrir o arquivo");
    } else {
        while (!feof(pFile)) {
            fgets(fileLine, 100, pFile);
            if (!feof(pFile)) {
                printf("%s", fileLine);
            }
        }   
    }
    fclose(pFile);

    return 0;
}
