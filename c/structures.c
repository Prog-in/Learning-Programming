// structures sao usadas quando precisamos armazenar dados de diferentes tipos juntos.
// para armazenar dados num membro duma variavel struct, usa-se structName.member (dot operator)
// para armazenar dados num membro duma scruct apontada, usa-se structPointer->member (structure pointer operator)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    struct invStruct {
        char  fabricante[25];
        char  modelo[15];
        int   armazenamento;
        int   memoria;
        int   ports;
        int   quantidade;
        float custo;
        float preco;
    };
    
    struct invStruct item1, item2, item3;

    struct invStruct *phitem1, *phitem2, *phitem3; // ph: pointer to heap
    phitem1 = (struct invStruct *) malloc(sizeof(struct invStruct));
    phitem2 = (struct invStruct *) malloc(sizeof(struct invStruct));
    phitem3 = (struct invStruct *) malloc(sizeof(struct invStruct)); 
    
    // Armazenando na structure
    strcpy(item1.fabricante, "Asus");
    strcpy(item1.modelo, "HLS189");
    item1.armazenamento = 500;
    item1.memoria       = 16;
    item1.ports         = 3;
    item1.quantidade    = 15;
    item1.custo         = 1267.48f;
    item1.preco         = 1999.99f;
    
    printf("Item 1:\n %s %s %i %i %i %i %f %f\n", item1.fabricante, item1.modelo, item1.armazenamento, item1.memoria, item1.ports, item1.quantidade, item1.custo, item1.preco);
    
    strcpy(phitem1->fabricante, "Gigabyte");
    printf("phitem1 teste:\n %s\n", phitem1->fabricante);

    return 0;
}
