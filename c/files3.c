// adicionar uma linha ao fim de livros.txt

#include <stdio.h>
#include <stdlib.h>  // exit

int main () {
    FILE *pFile;
    pFile = fopen("/home/joao/Programacao/c/aprender/livros.txt", "a");
    if (pFile == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    } 
    fprintf(pFile, "\nMore books to come!\n");

    fclose(pFile);

    return 0;
}
