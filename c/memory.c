// O heap eh a colecao de memoria nao usada no seu computador.
//
// A memoria deixada depois do seu programa encerrar compromete o
// espaco disponivel no heap. (nao tenho certeza dessa informacao)
//
// O heap eh usado pois muitas vezes seu programa precisa de mais memoria
// do que a incialmente definida em variaveis e arrays.
//
// Nao se define nomes de variaveis para a memoria do heap. 
// A unica forma de acessar os dados armazenados nessa memoria eh usando
// ponteiros.
//
// Ao alocar varias vezes memoria do heap, nao se pode garantir que as 
// secoes serao fisicamente continuas.
//
// Se voce alocar 10 bytes do heap de uma vez, esses 10 bytes serao fisicamente
// continuos, mas se voce alocar memoria do heap uma segunda vez, nao se pode
// afirmar que essas secoes serao continuas as da primeira vez
//
// Por que usar: com a memoria do heap, nao precisamos saber a principio quanto 
// de memoria precisaremos e, assim, a quantidade de memoria do heap que nossos 
// programas usam podem crescer ou diminuir como for preciso, em tempo de execucao
//
// Duas funcoes sao necessarias para usar o heap, e fazem parte da stdlib.h:
// malloc(), para alocar a memoria do heap, e free(), para desalocar a memoria do heap
//
// malloc() tem duas funcoes:
//  1. Alocar o numero de bytes requisitados e ter certeza de que nenhum outro programa
//  sobrescrevera essa memoria ate que o programa a libere
//  2. designar o ponteiro para o primeiro valor alocado
//  obs: malloc() sempre retorna char*, entao deve ser feito o typecast caso queira
//  outros tipos.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *temps;
    temps = (int *) malloc(10 * sizeof(int));
    if (temps == NULL) {
        printf("Memoria insuficiente!\n");
        exit(1); // termina o programa com codigo 1 (terminou sem sucesso)
    }
    free(temps);
    
    int *arrayTemps[50], num, i;
    for (i = 0; i < 50; i++) {
        printf("Quantas leituras para a cidade? : ");
        scanf(" %d", &num);

        arrayTemps[i] = (int *) malloc(num * sizeof(int));
    }
    
    for (i = 0; i < 50; i++) {
        free(arrayTemps[i]);
    }
    // ou tambem pode ser feito:
    // free(arrayTemps);
    
    return 0;
}
