#include <stdio.h>
#include <math.h>

void interface()
{
    printf(" .d8888b.        d8888 888      .d8888b.  888     888 888             d8888 888888888   .d88888b.  88888888          d8888 \n");
    printf("c88P  Y88b      d88888 888     d88P  Y88b 888     888 888            d88888 888    88b d88P    88b 888   Y88b       d88888 \n");
    printf("888    888     d88P888 888     888    888 888     888 888           d88P888 888    888 888     888 888    888      d88P888\n");
    printf("888           d88P 888 888     888        888     888 888          d88P 888 888    888 888     888 888   d88P     d88P 888\n");
    printf("888          d88P  888 888     888        888     888 888         d88P  888 888    888 888     888 88888888      d88P  888\n");
    printf("888    888  d88P   888 888     888    888 888     888 888        d88P   888 888    888 888     888 888 T88b     d88P   888\n");
    printf("Y88b  d88P d8888888888 888     Y88b  d88P Y88b. .d88P 888       d8888888888 888  .d88P Y88b. .d88P 888  T88b   d8888888888\n");
    printf(" 8Y8888P  d88P     888 88888888  Y8888P     Y88888P   88888888 d88P     888 888888888   Y88888P    888   T88b d88P     888\n\n");
                                                                                                                            
                                                                                                                            
                                                                                                                            
    printf("8888     d888 8888888 888           .d8888b.  888888888         d8888 888     888     888\n");                               
    printf("88888   d8888   888   888          d88P  Y88b 888   Y88b       d88888 888     888     888\n");                            
    printf("8888888888888   888   888          888    888 888    888      d88P888 888     888     888\n");                         
    printf("8888888888888   888   888          888        888   d88P     d88P 888 888     888     888\n");                      
    printf("888 Y888P 888   888   888          888  88888 88888888      d88P  888 888     888     888\n");                   
    printf("888  Y8P  888   888   888          888    888 888 T88b     d88P   888 888     888     Y8P\n");                
    printf("888       888   888   888          Y88b  d88P 888  T88b   d8888888888 Y88b. .d88P      | \n");             
    printf("888       888 8888888 88888888      Y8888P88 888   T88b  d88P     888   Y88888P       888\n\n");          

    printf("|---------------------------|\n");
    printf("|*** Menu da calculadora ***|\n");
    printf("|---------------------------|\n\n");

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potenciacao\n");
    printf("6 - Raiz Quadrada\n");
    printf("7 - Sair\n\n");

}


int main()
{
    int operacao;

    interface();

    printf("Digite o numero da operacao abaixo, ou '7' para sair\n");
    scanf("%d\n", operacao);

    if(operacao == 1)
    {
        soma();
    }

    else if(operacao == 2)
    {
        subtracao();
    }





    return 0;
}