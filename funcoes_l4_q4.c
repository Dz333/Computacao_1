#include <stdio.h>

int ehBissexto(int ano)
{
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

      if (ehBissexto(ano))
            printf("%d eh bissexto", ano);

     else
        printf("Não é bissexto");

    return 0;
}
