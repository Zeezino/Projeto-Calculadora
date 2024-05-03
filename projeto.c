#include <stdio.h>
#include <math.h>

double soma(int n)
{
    int i=1; //contador do laco de repeticao
    double numero, ultimo_numero; //numeros que serao somados
    double soma=0; // valor da soma

    printf("Insira a quantidade de numeros que serao somados abaixo:\n");
    scanf("%d\n", &n);

    printf("Agora, coloque os numero a serem somados:\n");

    while (i<n)
    {
        scanf("%lf", &numero);
        printf("+\n");

        soma = soma + numero; // a soma comeca em 0, e acrescenta o numero a cada loop

        i++; //o laco repete ate chegar na quantidade delimitada pelo usuario
    }    

    scanf("%lf", &ultimo_numero); //coloca-se separado o ultimo numero para nao sobrar um "+" no final
    printf("---------------------------\n\n");

    soma = soma + ultimo_numero;

    printf("O resultado eh:\n %.2lf\n", soma);

    return soma;
}

double subtracao()
{
    double n1;
}



int main()
{
    int escolha; //valor da escolha do menu


    printf("***Menu de opcoes da calculadora:***\n\n");

    printf("1 - Soma\n");
    printf("2 - subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("4 - Potenciacao\n");
    printf("5 - Raiz Quadrada\n");
    printf("6 - Sair\n\n");

    printf("Escolha sua opcao abaixo, ou aperte 6 para encerrar o programa:\n");
    scanf("%d\n", escolha);

    switch (escolha)
    {
        case 1:
        int p;
        soma();
        break;
    
        default:
        break;
    }
    
    return 0;
}