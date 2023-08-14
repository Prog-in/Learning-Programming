#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    unsigned char input;
    while (1)
    {
        printf("Digite um caractere (* para parar): ");
        //scanf("%c", &input);
        input = getchar();
        getchar();  // consumir /n
        
        if (input == '*')
        {
            break;
        }

        if (isalpha(input)) 
            {
                printf("%c is an alphabetic char!\n", input);

                if (isupper(input))
                {
                    printf("It's upper!\n");
                    printf("If lower: [%c]\n", tolower(input));
                }
                else
                {
                    printf("It's lower!\n");
                    printf("If upper: [%c]\n", toupper(input));
                }
            } 
        else if (isdigit(input))
        {
            printf("%c is a numeric char!\n", input);
        }
        else
        {
            printf("%c is a special char!\n", input);
        }

    };
        
    return 0;
}
