//
// Um ponteiro de arquivo armazena o endereco no disco do arquivo
// com o qual voce esta trabalhando
//
// Para abrir um arquivo, usa-se a funcao fopen(), presente em
// <stdio.h>
//
// Modos para o fopen():
//   "w": modo de escrita que cria um novo arquivo, mesmo que ja exista
//   "r": modo de leitura que permite ler um arquivo existente. Se nao
//   existir, dara erro
//   "a": append mode que te permite adicionar ao fim do arquivo ou criar
//   o arquivo caso nao exista
//
// Para fechar um arquivo aberto, utilizamos fclose()
// 
// para escrever num arquivo, usamos fprintf(), que tem utilizacao semelhante 
// ao printf()

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_p;  // define um ponteiro de arquivo
    
    file_p = fopen("/home/joao/Programacao/c/aprender/files.txt", "w");
    if (file_p == NULL) { 
        printf("Erro! O arquivo nao pode ser aberto\n");
        exit(1);
    }
    
    char text[80];
    char *pText = text;
    
    printf("Escreva algo para ser armazenado no arquivo files.txt:\n >");
    fgets(pText, 80, stdin);

    fprintf(file_p, text);
    fclose(file_p);

    return 0;
}
