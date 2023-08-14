/* Interagir com usuarios: <stdio.h>
*  int printf(const char *format, ...)
*      retorna a quantidade de caracteres escritos. Em falha, retorna n negativo
*      forma mais usada por iniciantes
*  int scanf(const char *format, ...)
*      para de pegar caracteres ao encontrar whitespace, newline ou EOF
*      possui varias particularidades (e defeitos...)
*      permite pegar apenas uma palavra
*      nao recomendado: buffer e arithmetic overflow
*  int putchar(int char)
*      manda um unico caractere para a tela (usado em conjunto com o getchar())
*  int getchar(void)
*      pega o primeiro caractere do teclado ate o \n
*      nao mostra esse caractere ao usuario
*      definido como int
*      cuidado com buffer!
*  int getch(void);
*      pega um caractere do teclado
*      unbuffered: nao usa buffer!
*      nao permite ao usuario corrigir input antes de enviar
*      funcao nao padrao: usar getchar
*  putch():
*      usado em MS-DOS
*      obsoleto, nao usar
*  int puts(const char *str)
*      imprime uma string estatica
*      adiciona \n ao final
*      mais simples que o printf
*      nao necessario explicitamente: compiladores convertem printf estatico em puts
*  char *gets(char *str)
*      pega caracteres ate newline ou EOF
*      retorna apenas string
*      nao recomendado: buffer overflow
*  char *fgets(char *str, int n, FILE *stream)
*      str: ponteiro para string que recebera a leitura
*      n: n maximo de chars que serao copiados (incluindo \0 ao final)
*      stream: ponteiro para o objeto FILE que identiifica o fluxo de entrada (stdin eh o do terminal) 
*/

#include <stdio.h>

int main()
{
    char firstInitial, lastInitial;
    int age, fav_number;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What's your favorite integer?\n");
    scanf(" %d", &fav_number);

    printf("Your initials are %c.%c\n", firstInitial, lastInitial);
    printf("You are %d years old\n", age);
    printf("Your fav number is %d\n", fav_number);

    return 0;
}
