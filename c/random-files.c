// O layout fisico de um arquivo nao define o tipo do arquivo (random ou sequential)
// Podemos criar um arquivo sequencialmente e entao le-lo e muda-lo randomicamente
// Para o C, um arquivo eh apenas um fluxo de dados (stream of bytes)
//
// Abrindo o arquivo randomicamente:
//   "r+": abre um arquivo existente para tanto leitura quanto escrita
//   "w+": abre um novo arquivo para tanto leitura quanto escrita
//   "a+": abre um arquivo em append mode (o ponteiro do arquivo aponta para o final
//   do arquivo), mas te permite andar para tras no arquivo, ler e escrever 
//
// fseek() eh usado para se mover num arquivo
// fseek(filePointer, longVal, origin)
//   filePointer: ponteiro para o arquivo
//   longVal: long int ou literal que pode ser tanto positivo quanto negativo e 
//   indica quantos bytes para viajar para frente ou para tras no arquivo.
//   origin: indica onde comecara a procura atual
//     SEEK_SET: Comeco do arquivo
//     SEEK_CUR: Posicao atual no arquivo
//     SEEK_END: Final do arquivo
// OBS: ao posicionar o ponteiro do arquivo sobre informacao existente (usando
// SEEK_SET e SEEK_CUR) e escrever novas informacoes, a nova informacao sobrescrevera
// a informacao existente

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pFile;
    char letra;
    int i;
    
    pFile = fopen("/home/joao/Programacao/c/aprender/letras.txt", "w+");
    if (pFile == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    
    for (letra = 'A'; letra <= 'Z'; letra++) {
        fputc(letra, pFile);
    }
    
    printf("\nLetras de A a Z foram gravadas num arquivo\n\n");
    
    fseek(pFile, -1, SEEK_END);
    for (i = 26; i > 0; i--) {
        letra = fgetc(pFile);
        fseek(pFile, -2, SEEK_CUR);
        printf("A proxima letra eh %c\n", letra);
    }
    
    fclose(pFile);

    return 0;
}
