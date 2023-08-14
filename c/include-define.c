/* #include e #define : Diretivas de pre-processamento
* #include <xxx.h> : mescla o arquivo incluido ao atual, como se fosse parte dele (definir macros)
* <xxx.h> : compilador procura primeiro nos locais padrao antes
* "xxx.h" : compilador procura no diretorio atual antes
* #define NAME value : define uma constante que sera substituida pelo valor antes do programa ser compilado
*/


#include <stdio.h>

#define NAME "Joao" 


int main()
{
    printf("%s\n", NAME);

    return 0;
}
