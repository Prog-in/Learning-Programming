#include <stdint.h>  // uint8_t 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct bookInfo {
        char titulo[80];
        char autor[80];
        float preco;
        unsigned short int paginas;
    };
    
    struct bookInfo books[3];
    FILE *pFile;
    uint8_t i;  // 1 byte unsigned integer (unsigned char)

    for (i = 0; i < 3; i++) {
        printf("Qual o nome do livro %d?\n > ", i+1);
        fgets(books[i].titulo, 80, stdin);
        if (books[i].titulo[strlen(books[i].titulo) - 1] == '\n') {
            books[i].titulo[strlen(books[i].titulo) - 1] = '\0';
        }

        printf("Qual o nome do autor?\n > ");
        fgets(books[i].autor, 80, stdin);
        if (books[i].autor[strlen(books[i].autor) - 1] == '\n') {
            books[i].autor[strlen(books[i].autor) - 1] = '\0';
        }

        printf("Qual o preco do livro?\n > ");
        scanf(" %f", &books[i].preco);
        printf("Quantas paginas tem o livro?\n > ");
        scanf(" %hu", &books[i].paginas);
        getchar();  // limpar o ultimo \n
        if (i < 2) {
            printf("\n");  // pular uma linha
        }
    }

    pFile = fopen("/home/joao/Programacao/c/aprender/livros.txt", "w");
    if (pFile == NULL) {
        printf("Erro! O arquivo nao pode ser aberto");
        exit(1);
    }

    fprintf(pFile, "Colecao de livros:\n");
    for (i = 0; i < 3; i++) {
        fprintf(pFile, "\nLivro %hu:\n", i+1);
        fprintf(pFile, "\tTitulo: %s\n", books[i].titulo);
        fprintf(pFile, "\tAutor: %s\n", books[i].autor);
        fprintf(pFile, "\tPreco: R$%.2f\n", books[i].preco);
        fprintf(pFile, "\tPaginas: %hu\n", books[i].paginas);
    }
    
    fclose(pFile);

    return 0;
}
