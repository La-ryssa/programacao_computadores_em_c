#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade >= 16)
    {
        printf("Voce ja pode votar!\n");
    }
    else
    {
        printf("Voce ainda nao tem idade suficiente para votar.\n");
    }

    return 0;
}
