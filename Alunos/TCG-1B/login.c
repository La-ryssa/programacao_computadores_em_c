#include <stdio.h>

int main()
{
    int senhaCorreta = 1234;
    int senhaDigitada;
    int usuarioAtivo = 1;

    printf("Digite sua senha: ");
    scanf("%d", &senhaDigitada);

    if (senhaDigitada == senhaCorreta && usuarioAtivo == 1)
    {
        printf("Acesso concedido. Bem-vindo!\n");
    }
    else
    {
        printf("Acesso negado. Verifique a senha ou o status da conta.\n");
    }

    return 0;
}
