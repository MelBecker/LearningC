#include <stdio.h>
int main(void)
{
    int numero, ano;
    
    printf("\n\nEssa é a sequência de 2000 a 2021: \n");
    for (ano = 2000; ano < 2022; ano++)
    {
        printf("%d, ", ano);
    }
    ano = 2000;
    printf("\n\nEssa é a sequência de 2000 a 2021: \n");
    while (ano < 2022)
    {
        printf("%d, ", ano);
        ano++;
    }
    printf("\n\nEssa é a sequência de 2021 a 2009: \n");
    for (ano = 2021; ano >= 2009; ano--)
    {
        printf("%d ", ano);
    }
    printf("\n\nEssa é a sequência de números pares de 2 a 100: \n");
    for(numero = 2; numero <= 100; numero += 2)
    {
        printf("%d ", numero);
    }
    printf("\n\nEssa é a sequência dos múltiplos de 7 a 700: \n");
    for(numero = 7; numero <= 700; numero += 7)
    {
        printf("%d ", numero);
    }
    return 0;
}
