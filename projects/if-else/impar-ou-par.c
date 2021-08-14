#include <stdio.h>
int main(void)
{
    int numero;
    printf("Ei esse é o meu programa!");
    printf("\nEle mostra se o número escolhido é Par ou Impar!");
    printf("\n\nDigite um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("\nO número %d é Par", numero);
    }
    else
    {
        printf("O número %d é Impar", numero);
    }
    return 0;
}
